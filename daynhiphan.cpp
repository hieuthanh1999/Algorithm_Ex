
 
#include<iostream>
#include<math.h>
using namespace std;
 int n;
  int *A = new int[n];
void tryx(int i)
{
int j;
for(j=0 ;j < n; j++){
A[i]=j; // th? các giá tr? c?a data[i] có th? nh?n
if(i ==n){
cout<<(n);
return;
}
tryx(i+1); //th? ti?p giá tr? x[i+1]
}
}
 
void xuat(int A[], int n) {
    for (int i = 0; i < n; i++)
        cout << A[i];
    cout << endl;
}
 
int main(){
    
    cout << "Nhap n: ";
    cin >> n;
    //Kh?i t?o m?ng
   
    //Xây d?ng c?u hình d?u tiên
    for (int i = 0; i < n; i++) A[i] = 0;
    //In c?u hình hi?n t?i và xây d?ng c?u hình k? ti?p
    for (int i = 0; i < n; i++) {
        xuat(A, n);
        tryx(i);
    }
}
 
