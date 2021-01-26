#include<bits/stdc++.h>
using namespace std;
#define N 100001
int a[N], n, d=0;

int main()
{
	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++)
	{
		int j=i+1;
			if(i<j && a[i]>a[j])
			{
				d++;
			}
			j++;
		}
	cout<<d;

	return 0;
}

