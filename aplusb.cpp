#include <bits/stdc++.h>
using namespace std;


int main()
{
	long long int  n,x;
	cin>>n;
	long long int a[n+2];
	a[0]=0;
	a[1]=0;
	for(int i=2;i<=n;i++)
	{
		a[n]=a[n-1]+a[n-2];
		cout<<a[i]<<" ";
	}
	cout<<a[n];	
}
