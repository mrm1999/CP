// Coin change(Type 1) problem :- you have to calculate number of ways to change the coins
#include <bits/stdc++.h>
using namespace std;
void coin_t1(int coins[] , int n,int N)
{
	int m = INT_MAX - 1;
	int dp[n+1][N+1];
	int i,j;
	for(i=0;i<=n;i++)
	{
		dp[i][0] = 1;
	}
	for(j=1;j<=N;j++)
	{
		dp[0][j] = m;
	}
	for(j=1;j<=N;j++)
	{
		if(j%coins[0] == 0)
		{
			dp[1][j] = j/coins[0];
		}
		else
		{
			dp[1][j] = m;
		}
	}
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=N;j++)
		{
			if(coins[i-1] <=j)
			{
				dp[i][j] = min(1+dp[i-1][j-coins[i-1]] , dp[i-1][j]);
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	int result = dp[n][N];
	//return result;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=N;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	
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
	cout<<"Coins array:- ";
	for(int i=0;i<n;i++)
	{
		cin>>coins[i];
	}
	 coin_t1(coins , n , N);
//	cout<<ans;
	
} 
