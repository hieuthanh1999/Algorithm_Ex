#include<bits/stdc++.h>
#define N 10001

using namespace std;
int n, a[N], p[N]={1};

void dulieu()
{
	cin>>n;
	//for(int i=0; i<n; i++) p[i]=1;
}
void xuat()
{
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
}

void back_track(int k)
{
	for(int j=0; j<2; j++)
	{
		a[k]=j;
		if(p[j])
		{	
			p[j] = 0;
			if(k == n-1) xuat();
			else back_track(k+1);
			p[j] = 1;
		}
		}
}

int main()
{
	dulieu();
	back_track(0);
	return 0;
}

