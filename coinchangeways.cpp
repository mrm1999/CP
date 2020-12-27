#include <bits/stdc++.h>
using namespace std;
int solve(int arr[] , int sum , int n)
{
	int i,j;
	int dp[n+1][sum+1];
	for(j=0;j<=sum ; j++)
	{
		dp[0][j] = 0;
	}
	for(i=0;i<=n;i++)
	{
		dp[i][0] = 1;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sum;j++)
		{
			if(arr[i-1] <= j)
			{
				dp[i][j] = dp[i-1][j] + dp[i][j-arr[i-1]] ;
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	int ans = dp[n][sum];
	return ans;
}
int main()
{
	int sum,n;
	cin>>sum;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans = 	solve(arr , sum , n);
	cout<<ans<<endl;
}
