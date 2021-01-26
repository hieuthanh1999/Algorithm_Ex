#include<bits/stdc++.h>
using namespace std;
#define N 21
int a[N], p[N]={1}, dem=0, n;
void khoitao()
{
	cin>>n;
	for(int i=1; i<=n; i++)
		p[i]=1;
	}
void xuat()
{
	for(int i=1; i<=n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void back_track(int k)
{
	for(int j=1;j<=n; j++)
		if(p[j])
		{
			a[k]=j; p[j]=0;
			if(k==n) xuat(); 
			else back_track(k+1);
			p[j]=1;
		}
}

int main()
{
	khoitao();
	
	back_track(1);
	return 0;
}

