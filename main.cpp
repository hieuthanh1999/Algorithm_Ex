/*
Bài toán "8 Hậu":
Trên bàn cờ kích thước NxN (cụ thể N=8),
xếp N quân hậu vào đó, sao cho không con nào ăn được con nào.
Thuật toán:
- Xếp từ cột 1 đến cột N.
- Với mỗi cột thứ k, thử xếp lần lượt từ dòng i=1 đến N
    + Nếu k=N+1 thì coi như đã xếp xong.
    + ngược lại (tức là k<=N)
        + Thử xếp vào dòng i trên cột k.
            - Nếu xếp được vào dòng i ở cột k thì xếp tiếp cột k+1
            - Nếu tất cả các dòng trên cột k đều không thể xếp được
            thì chứng tỏ cách xếp trên dòng i ở cột (k-1) chưa đúng,
            và phải xếp lại trên cột (k-1), đây chính là bước quay lui.

* Thuật toán xếp trên dòng i ở cột k:
 Nếu tại vị trí (i,k) mà "Xếp được" thì xếp vào đó, và xếp tiếp cột k+1.
 Thế nào là xếp được?
  Nếu:
  - Trên dòng i chưa có quân nào (kiểm tra từ cột 1-->n không có hậu)

  - Trên đường chéo 1 chưa có quân nào
  - trên đường chéo 2 chưa có quân nào
      cho i,j chạy. Nếu có quân ở (i,j) thì quân đó không được cùng
      đường chéo với (d,c): abs(i-d)!=abs(j-c)
*/

#include <bits/stdc++.h>

using namespace std;
const int n=8;// Kích thước của bàn cờ

int a[n+1][n+1];
int socach=0;

void in_kq()
{   cout<< "cach:"<<socach<<endl;
    for(int i=1; i<=n; i++)
    {   for(int j=1; j<=n; j++)
            cout<<setw(2)<<(a[i][j]>0?"*":".");
        cout<<endl;
    }
    cout<<endl;
}
bool cungdong(int d,int c)      //Có hậu cùng dòng với (d,c) rồi
{   for (int i=1; i<=n; i++)
        if (a[d][i]==1)         //đã có hậu trên dòng d, cột i
            return true;
    return false;
}
bool cungduongcheo(int d, int c)   //Có hậu cùng đường chéo 1 với (d,c) rồi
{   for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            if (a[i][j]==1)
                if(abs(d-i)==abs(c-j))
                    return true;         //đã có hậu trên dòng d-i, cột c-i
    return false;
}

bool xepduoc(int dong, int cot)
{   if (cungdong(dong,cot) || cungduongcheo(dong,cot))
        return false;
    else
        return true;
}

void xep_hau(int k)
{   if (k>n)// xếp xong n cột thì in kết quả
    {   socach++;
        in_kq();
        // exit(0);
    }
    else
        for(int i=1; i<=n; i++)
            if(xepduoc(i,k))
            {   a[i][k]=1;
                xep_hau(k+1);
                a[i][k]=0;    //bước quay lui
            }
}
void chuanbi()
{
//  for(int i=1; i<=n; i++)
//        for(int j=1; j<=n; j++)
//            a[i][j]=0;
    memset(a,0,sizeof(a));
}
int main()
{   chuanbi();
    cout<<"n="<<n<<endl;
    xep_hau(1);
    return 0;
}

/* Phương án 2: dùng 3 mảng để oánh dấu
#include <bits/stdc++.h>
const int nmax=8;

int n, a[nmax], b[2*nmax], c[2*nmax], d[nmax];

void Chuanbi()
{
    cin >> n;
    for(int i=2;i<=2*n;i++)
        b[i]=1;
    for(int i=1-n;i<=n-1;i++)
        c[i]=1;
    for(int i=1;i<=n;i++)
        d[i]=1;
}
 
void Xuat()
{
    for(int i=1;i<=n;i++)
        cout << "{dong: " << i << ", xep vao cot: " << a[i] << "} \n";
    cout << endl;
}
 
void tim(int i)
{
    for(int j=1; j<=n; j++)
    {
        if(d[j] && b[i+j] && c[i-j])
        {
            d[j]=0; b[i+j]=0; c[i-j]=0;
            a[i]=j;
            if(i==n)
	Xuat();
            else
	tim(i+1);
            d[j]=1; b[i+j]=1; c[i-j]=1;
        }
    }
}
 
int main()
{
    Chuanbi();
    tim(1);
}
*/
/* Phương án 3: Dùng 1 mảng các điểm để chứa kết quả
#include <bits/stdc++.h>

using namespace std;
const int n=8;// Kích thước của bàn cờ
struct vitri
{   int d,c;
};
vitri a[n];
bool xepduoc(int dong, int cot)
{   for (int i=0; i<cot; i++)
        if ((a[i].d==dong) || (abs(a[i].c-cot)==abs(a[i].d-dong)))
            return false;
    return true;
}
void inkq()
{   for (int i=1; i<=n; i++)
        cout<<"("<<a[i].d<<","<<a[i].c<<")"<<endl;
   //in bàn cờ
    for (int j=1; j<=n; j++)
    {   for (int i=1; i<=n; i++)
            if ( a[j].d==i)
                cout<<" * ";
            else cout<<" . ";
        cout<<endl;
    }
}
void xep(int k)
{   if (k>n)
    {   inkq();
        exit(0);
    }
    else
    {   for (int i=1; i<=n; i++)
            if (xepduoc(i,k))
            {   a[k].c=k;
                a[k].d=i;
                xep(k+1);
                a[k].c=0;
                a[k].d=0;
            }
    }
}
int main()
{   a[1].c=1;
    a[1].d=1;
    xep(1);
    return 0;
}
*/

