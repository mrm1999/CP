// Given a set ,find the number of subset such that their sum is equal to given sum; 
#include <bits/stdc++.h>
using namespace std;
int count_subset (int arr[]  , int sum , int n)
{
	int dp[n+1][sum+1];
	int i;
	int j;
	// Intialization
	for(j=0;j<=sum;j++)
	{
		dp[0][j] =0;
	}
	for(i=0;i<=n;i++)
	{
		dp[i][0] =1;
	}	
	//code
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sum;j++)
		{
			if(arr[i-1]<=j)
			{
				dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j]  ;
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
	cout<<"n :- ";
	int n;
	int sum ;
	cin>>n;
	cout<<"Sum :- ";
	cin>>sum;
	cout<<"Array :- ";
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans = count_subset(arr , sum , n);
	cout<<"Total Number of Subset:-  "<<ans;
}
