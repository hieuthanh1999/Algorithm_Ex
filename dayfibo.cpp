#include<bits/stdc++.h>
using namespace std;
long dequy(long n)
{
	if(n<=2) return 1;
	else return dequy(n-1)+dequy(n-2);
}
int main()
{
	long n; cin>>n;
	cout<<dequy(n);
	return 0;
}

