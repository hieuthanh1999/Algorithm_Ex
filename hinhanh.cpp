#include<bits/stdc++.h>
using namespace std;
int a[801][801];
int main()
{
	int n, k, dem=0;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
			}
	for(int i=0; i<n-k; i++){
		for(int j=0; j<n-k; j++)
		{
			for(int u=i; u<i+k; u++)
				for(int v=j; v<j+k v++)
				{
					if(a[u][v]!=0 ) break;
					
				}
			dem++;
				
		}
		}

		cout<<dem;
	return 0;
}

