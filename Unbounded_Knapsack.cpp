#include <bits/stdc++.h>
using namespace std;
int unbounded_knapsack(int w[] , int v[] , int W ,int n)
{
	int dp[n+1][W+1];
	int i,j;
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
			if(w[i-1] <= j)
			{
				dp[i][j] = max(v[i-1]+ dp[i][j-w[i-1]] , dp[i-1][j]);
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	int result;
	result = dp[n][W];
	return result;
}
int main()
{
	int n , W;
	int w[n];
	int v[n];
	cout<<"W :- ";
	cin>>W;
	cout<<"n :- ";
	cin>>n;
	cout<<"Weight Array:- ";
	for(int i=0;i<n;i++)
	{
		cin>>w[i];	
	}	
	cout<<"Value Array:- ";
	for(int i=0;i<n;i++)
	{
		cin>>v[i];	
	}
	int ans = unbounded_knapsack(w , v, W , n);
	cout<<ans;
} 
