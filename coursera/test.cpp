#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
	if(n>0)
	{
		int dp[n+1];
		dp[0]=0;
		dp[1]=0;
		dp[2]=1;
		dp[3]=1;
		if(n>=4)
		{
			for(int i=4;i<=n;i++)
			{
				dp[i] = 1+ min(min ( dp[i/2] , dp[i/3]) , dp[i-1]);
			}
		}
		cout<<dp[n];
	}
}
int main()
{
	int n;
	cin>>n;
	solve(n);
}
