#include <bits/stdc++.h>
using namespace std;
int gold(int w[] , int W , int n)
{
	int i , j ;
	int val = 0;
	int dp[n+1][W+1];
	for(i=0;i<=n;i++)
	{
		dp[i][0] = 0;
	}
	for(j=0;j<=W;j++)
	{
		dp[0][j] = 0;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=W;j++)
		{
			if(w[i-1]<=j)
			{
				dp[i][j] = max(w[i-1] + dp[i-1][j-w[i-1]] , dp[i-1][j]);
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	
	}
	/*for(int i=0;i<=n;i++)
	{
		for(int j = 0;j<=W; j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
	val = dp[n][W];
	return val;
}
int main()
{
	int W ,n, i ;
	
	cin>>W>>n;
	int w[n];
	for(i=0;i<n;i++)
	{
		cin>>w[i];
	}
	int ans = gold(w , W ,n);
	cout<<ans;
}
