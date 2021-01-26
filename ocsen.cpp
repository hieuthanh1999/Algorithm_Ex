#include<bits/stdc++.h>
using namespace std;
int main()
{
	long a, b,v;
	cin>>a>>b>>v;
	long ngay=1;
	while(a<v)
	{
		v=v-a;
		v=v+b;
		ngay++;
	}
	
	cout<<ngay;
	return 0;
}

