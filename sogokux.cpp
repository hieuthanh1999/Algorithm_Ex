#include<bits/stdc++.h>
using namespace std;
#define Max 9
int main()
{
	int t; cin>>t;
	for(int k=0; k<t; k++)
	{	
		bool check1=false;
		bool check2=false;
		int n=9, a[Max][Max];
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cin>>a[i][j];
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
			{
				if(a[i][j] != a[i][j+1] && a[i][j]=='0') check1=true;
				else check1=false;
			}
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
			{
				if(a[j][i] != a[j][i+1] && a[i][j]=='0') check2=true;
				else check2=false;
			}
		(check1==true && check2==true)?cout<<"true":cout<<"false"<<endl;
	}
	return 0;
}

