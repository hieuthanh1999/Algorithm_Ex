#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, t;
	cin>>a>>b>>c;
	cin>>t;
	if(t==0 || a+b+c==t) cout<<"A";
	if(t==a) cout<<"B";
	if(t==a+b) cout<<"C";
	if(t<(a+b) && t>b && t>a) cout<<"BC";
	if(t<(a+b) && t<b) cout<<"AB";
	if(t<(a+b+c) && t>(a+b))  cout<<"CA";
	
	return 0;
}

