#include <bits/stdc++.h>
using namespace std;
void partition(int a[] ,int  n)
{
	int i , j,sum;
	sum =0;
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	if(sum%3 != 0)
	{
		cout<<0;
	}
	else
	{
		int x = (sum/3)+1;
		bool dp[n+1][x];
		for(i=0;i<=n;i++)
		{
			dp[i][0]=true;
		}
		for(j=0;j<x;j++)
		{
			dp[0][j]=false;
		}
		for(j=1;j<x;j++)
		{
			for(i=1;i<=n;i++)
			{
				dp[i][j] = dp[i-1][j];
				if(a[i-1]<=j)
				{
					dp[i][j] = (dp[i][j] || dp[j-a[i-1]][j-1]);
				}
			}
		}
		for(j=0;j<x;j++)
		{
			for(i=0;i<=n;i++)
			{
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		bool ans = dp[n][sum/3];
		cout<<ans<<endl;
		
		
	}
		
}
int main()
{
	int n , i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	 partition(a , n);
}
