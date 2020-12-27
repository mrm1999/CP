#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n ,k,i;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%k==0)
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}
	cout<<endl;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
