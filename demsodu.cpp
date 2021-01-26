#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<long> c;
	long n, x, a[100001], b[100001];
	cin>>n>>x;
	for(long i=0; i<n; i++ )
	{ 	cin>>a[i];
		b[i]=0;
	}
//	 longdem=1;
//	int tam=2;
	for(long i=0; i<n; i++)
	{
		long	j=a[i]%x;
		c.insert(j);
		j++;
		   /* for(long long j=0; j<i; j++) {
                                 if(b[j]==b[i]) {
                                                tam = 0;
                                                break;
                                    } else
                                                tam = 1;
                        }
                        if(tam == 1)
                                    dem++;*/
	}

	cout<<c.size();
		return 0;
}

