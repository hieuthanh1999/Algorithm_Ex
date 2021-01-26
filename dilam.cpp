#include<bits/stdc++.h>
using namespace std;

void quickSort(long a[], int l , int r)
{
	if (l <= r)
	{
	
		int key =a[(l+r)/2];
 
	
		int i = l;
		int j = r;
 
		while (i <= j)
		{
			while (a[i] < key)
				i++;
			while (a[j] > key)
				j--;
 
			if (i <= j)
			{
				swap(a[i], a[j]);
				i++;
				j--;
			}
		}
		if (l < j)
			quickSort(a, l, j);
		if (r > i)
			quickSort(a, i, r);
	}
}
int main()
{
	long n, a[10000001], b[10000001];
	 cin>>n;
 	if(n<2) cin>>n; 
	 for(int i=0; i<n; i++) {cin>>a[i]; b[i]=0;}
	quickSort(a,0, n-1);
	//	for(int i=0; i<n; i++) cout<<a[i]<<" ";
 	int j=0;
 	for(int i=n-1; i>=0; i--)
 	{ for(int k=0; k<i ; k++)
 	{
 		b[j]=a[i]-a[k];
 		j++;
	 }
 		
	 }
	 long min=b[0];
	for(int i=0; i<j; i++){
		if(min>b[i])min= b[i];
	}
	cout<<min;
	
	return 0;
}

