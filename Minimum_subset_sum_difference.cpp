// Given a set , Divide the set into two set such that their sum difference is minimum;.
#include <bits/stdc++.h>
using namespace std;
int min_sub_diff (int arr[]  , int sum , int n)
{
	int dp[n+1][sum+1];
	int i;
	int j;
	// Intialization
	for(j=0;j<=sum;j++)
	{
		dp[0][j] =false;
	}
	for(i=0;i<=n;i++)
	{
		dp[i][0] =true;
	}	
	//code
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sum;j++)
		{
			if(arr[i-1]<=j)
			{
				dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j]  ;
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	int ans = -1;
	for(j=1;j<=sum/2;j++)
	{
		if(dp[n][j])
		{
			ans = max(ans , j);
		}
	}
	return ans;
}
int main()
{
	cout<<"n :- ";
	int n;
	int sum = 0;
	cin>>n;
	cout<<"Array :- ";
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		sum = sum + arr[i];
	}
	int ans =-1;
	/*for(i=sum/2 ; i>=0 ; i--)
	{
		if(min_sub_diff(arr , i , n))
		{
			ans = i;
			break;
		}
	}*/
	ans = min_sub_diff(arr , sum , n);
	ans = sum - (2*ans);
	cout<<"Minimum Difference:-  "<<ans;
}
