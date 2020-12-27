#include <bits/stdc++.h>
using namespace std;
int knapsack(int w[] , int v[] , int W , int n)
{
	int dp[n+1][W+1];
	int i;
	int j;
	// Intialization
	for(i=0;i<=n;i++)
	{
		dp[i][0] =0;
	}	
	for(j=0;j<=W;j++)
	{
		dp[0][j] =0;
	}	
	//code
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=W;j++)
		{
			if(w[i-1]<=j)
			{
				dp[i][j] = max(v[i-1]+dp[i-1][j-w[i-1]] , dp[i-1][j]);
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	int result = dp[n][W];
	return result;
}
int main()
{
	cout<<"W :- "; 
	int W;
	cin>>W;
	cout<<"n :- ";
	int n;
	cin>>n;
	cout<<"Weight Array :- ";
	int w[n];
	int v[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>w[i];
	}
	cout<<"Value Array :- ";
	for(i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int ans = knapsack(w , v , W , n);
	cout<<ans<<endl;
	
}
