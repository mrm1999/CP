// Coin change(Type 1) problem :- you have to calculate number of ways to change the coins
#include <bits/stdc++.h>
using namespace std;
int coin_t1(int coins[] , int n,int N)
{
	int dp[n+1][N+1];
	int i,j;
	for(i=0;i<=n;i++)
	{
		dp[i][0] = 1;
	}
	for(j=1;j<=N;j++)
	{
		dp[0][j] = 0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=N;j++)
		{
			if(coins[i-1] <=j)
			{
				dp[i][j] = dp[i][j-coins[i-1]] + dp[i-1][j];
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	int result = dp[n][N];
	return result;
	
}
int main()
{
	cout<<"n :-";
	int n;
	cin>>n;
	
	int coins[n];
	int N;
	cout<<"N:- ";
	cin>>N;
	for(int i=0;i<n;i++)
	{
		cin>>coins[i];
	}
	int ans = coin_t1(coins , n , N);
	cout<<ans;
	
} 
