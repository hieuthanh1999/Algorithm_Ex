#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n, sum=0; 
	string a, b;
	cin>>n;
	for(long  i=0; i<n; i++)
	{ cin>>a[i];
	}
	for(long  i=0; i<n; i++)
	{
		(long)b[a[i]]++;
	}
	for(long i=0; i<n ; i++) cout<<(long)b[i]<<" ";
	
	/*for(long i=1; i<=n; i++)
	{
		if(b[i]>5) sum=sum+(100 + (n-5));
		else	if(b[i]>0 && b[i]<=5) sum=sum+100;
		}	
	cout<<sum;*/
	return 0;
}
