#include<bits/stdc++.h>
using namespace std;
#define N 100001
long n, a[N], b[N], c[N], k=0; 
int main()
{
	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++)
		cin>>b[i];
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			c[k] = abs(a[i]+b[j]);
			k++;
		}
	}
	int min=c[0];
	for(int i=0; i<k; i++)
	{
		if(min>c[i]) min=c[i];
	}

	cout<<min;
	
	return 0;
}

