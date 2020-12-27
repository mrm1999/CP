#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int cnt=0;
	long long int mid = a[n/2];
	for(i=0;i<n;i++)
	{
		if(mid==a[i])
		{
			cnt++;
		}
	}
	if(cnt>n/2)
	{
		cout<<1;
	}
	else cout<<0;
	
	
}
