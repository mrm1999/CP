#include <bits/stdc++.h>
using namespace std;
void solve(int arr[] ,int val[] , int l , int n)
{
	int i,j;
	int  dp[n+1][l+1];
	for(j=0;j<=l ; j++)
	{
		dp[0][j] = 0;
	}
	for(i=0;i<=n;i++)
	{
		dp[i][0] = 0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=l;j++)
		{
			if(arr[i-1] <= j)
			{
				dp[i][j] = max(val[i-1] + dp[i][j-arr[i-1]] , dp[i-1][j]);
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=l;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	int ans = dp[n][l];
	cout<<ans;
}
int main()
{
	int l,n;
	
	cin>>n;
	int arr[n];
	int val[n];
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
	cin>>l;
	solve(arr , val , l , n);
//	cout<<ans<<endl;
}
