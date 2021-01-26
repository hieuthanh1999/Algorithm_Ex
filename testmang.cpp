#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int> a, b;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		b[a[i]]++;
		}
	
	for(int it=0; it<b.size(); it++)
	{
		cout<<b[it]<<endl;
	}
		
	return 0;
}

