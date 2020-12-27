#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n , k;
	
	cin>>n>>k;
	long long int a[n];
	long long int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	long long int sum = 0;
	long long int index = 0;
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
		if(sum>=k)
		{
			index = i;
			break;
		}
	}
	int m = n - index - 1;
	if(k==0)
	{
		for(i=0;i<n;i++)
		{
			cout<<0;
		}
	}
	else
	{
		for(i=0;i<n;i++)
	{
		if(i<m)
		{
			cout<<0;
		}
		else
		{
			cout<<1;
		}
	}
	}
	
	
}
