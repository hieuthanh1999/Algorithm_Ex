#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int n, a[100001], b[100001];
	 cin>>n;
	 for(int i=0; i<n; i++) {cin>>a[i]; b[i]=0;}
 	int j=0;
 	for(int i=n-1; i>=0; i--)
 	{ 
 	
 		b[j]=a[i]-2;
 		j++;
 		
	 }
	for(int i=0; i<j; i++) cout<<b[i]<<" ";

	return 0;
}

