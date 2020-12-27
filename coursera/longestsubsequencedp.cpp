#include <bits/stdc++.h>
using namespace std;
void  solve(int arr1[] , int arr2[] , int m ,int n)
{
	int dp[m+1][n+1];
	int i , j;
	for(i=0;i<=m;i++)
	{
		dp[i][0] = i;
	}
	for(j = 0;j<=n ;j++)
	{
		dp[0][j] = j;
	}
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=m;i++)
		{
			if(arr1[i-1]==arr2[j-1])
			{
				dp[i][j] = min(min(1+dp[i-1][j] , 1+dp[i][j-1] ), dp[i-1][j-1]);
			}
			else
			{
				dp[i][j] = min(min(1+dp[i-1][j] , 1+dp[i][j-1] ), dp[i-1][j-1]+1);
			}
		}
	}
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int x =dp[m][n];
	}
int main()
{
	int i , m ,n;
	int arr1[m];
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>arr1[i];
	}
	cin>>n;
	int arr2[n];
	for(i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	
	solve(arr1 , arr2 , m ,n);
	
}
