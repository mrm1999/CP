#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n,i;
	int k;
	cin>>n>>k;
	string s1;
	cin>>s1;
	int cnt0 = 0;
	int cnt1 = 0;
	for(i=0;i<n;i++)
	{
		if(s1[i] == '0')
		{
			cnt0++;
		}
		if(s1[i] == '1')
		{
			cnt1++;
		}
	}
	int p = n/k;
	if(cnt0 % p != 0 || cnt1 %p !=0)
	{
		cout<<"IMPOSSIBLE"<<endl;
	}
	else
	{
			string base = "";
		 	int x = cnt0/p;
		 	int y = cnt1/p;
		 	for(i=0;i<x;i++)
		 	{
		 		base = base + '0';
			}
			for(i=0;i<y;i++)
			{
				base = base + '1';
			}
			string ans = "";
			for(i=1;i<=p;i++)
			{
				ans = ans + base;
				reverse(base.begin() , base.end());
			}
			cout<<ans<<endl;
	}
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
