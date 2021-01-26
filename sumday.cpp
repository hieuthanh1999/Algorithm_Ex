#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n, a[10001], sum=0;
	cin>>n;
	for(int i=0; i<n;i++){ 
			cin>>a[i];
			sum+=a[i];
	}
	cout<<sum;
	return 0;
}

