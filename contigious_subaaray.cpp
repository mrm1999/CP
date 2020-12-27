#include <bits/stdc++.h>
using namespace std;
int solve(int a[] , int n)
{
	int current = 0;
	int trace = INT_MIN;
	for(int i=0;i<n;i++)
	{
		current = current + a[i];
		trace = max(current, trace);
		if(current < 0)
		{
			current = 0;
		}
	}
	return trace;
}
int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ans = solve(a, n);
		cout<<ans<<endl;
	}
}
