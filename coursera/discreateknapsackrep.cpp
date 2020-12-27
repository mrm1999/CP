#include <bits/stdc++.h>
using namespace std;
void knapsack(int v[] , int w[] , int n , int a)
{
	int x = 0;
	int dp[a+1];
	for(int i=0;i<=a;i++)
	{
		dp[i]=0;
		for(int j = 0;j<n;j++)
		{
			if(i-w[j]>=0)
			{
			x= dp[i-w[j]] + v[j];
			if(x>dp[i])
			{
				dp[i]= x;
			}
			
			}
		}
	}
	int b =dp[a];
	for(int i=0;i<=a;i++)
	{
		cout<<dp[i]<<" ";
	}
	//return b ;
}
int main()
{
	int n;
	int v[n];
	int w[n];
	int a , i;
	cin>>a>>n;
	for(i=0;i<n;i++)
	{
		cin>>v[i]>>w[i];
	}
  knapsack(v , w , n ,a);
}
