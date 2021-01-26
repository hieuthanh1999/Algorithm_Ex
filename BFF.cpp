#include<bits/stdc++.h>
using namespace std;
long uoc(long n)
{
	long s=0;
	for(long i=1; i<n; i++)
	{
		if(n%i==0) s+=i;
	}
	return s;
}
int main()
{
	long a, b;
	cin>>a>>b;
	
	(uoc(a)==b && uoc(b)==a)?cout<<"YES":cout<<"NO";
//cout<<uoc(a);
//cout<<uoc(b);
	return 0;
}

