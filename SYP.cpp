#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k; 
	int a[100][100];
	int sum, max=0;
	cin>>n>>k;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	for(int i=0; i<=n-k; i++)
	{
		for(int j=0; j<=n-k; j++)
		{
			sum=0;
			for(int u=i; u<i+k; u++)
				{
					for(int v=j; v<j+k; v++) sum+=a[u][v];
				}
			if(max<sum) max=sum;
		}
			
		
	}
	cout<<max;
	return 0;
}

