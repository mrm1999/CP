#include <bits/stdc++.h>
using namespace std;
void solve(int arr[] , int sum , int n)
{
	int i,j;
	bool dp[n+1][sum+1];
	for(j=0;j<=sum ; j++)
	{
		dp[0][j] = false;
	}
	for(i=0;i<=n;i++)
	{
		dp[i][0] = true;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sum;j++)
		{
			if(arr[i-1] <= j)
			{
				dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]] ;
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	bool ans = dp[n][sum];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=sum;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	if(ans)
	{
		cout<<"true";
	}
	else
	{
		cout<<"false";
	}
	
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
	solve(arr , sum , n);
//	cout<<ans<<endl;
}
