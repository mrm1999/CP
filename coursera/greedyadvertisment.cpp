#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n ,  i;
	cin>>n;
long long 	int a[n];
	long long int b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	sort(a , a+n);
	sort(b , b+n);
	long long int sum=0;
	for(i=0;i<n;i++)
	{
		sum += (a[i]*b[i]);
	}
	cout<<sum;
}
