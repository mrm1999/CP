// Given a set we have to find that if set contains a subset whose sum is equla to give number.Return true if Yes else return false
#include <bits/stdc++.h>
using namespace std;
bool subset_sum (int arr[]  , int sum , int n)
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
	bool result = dp[n][sum];
	return result;
}
int main()
{
	cout<<"Sum :- "; 
	int sum;
	cin>>sum;
	cout<<"n :- ";
	int n;
	cin>>n;
	cout<<"Array :- ";
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bool ans = subset_sum (arr  , sum , n);
	if(ans)
	{
		cout<<"Possible";
	}
	else
	{
		cout<<"Not  Possible";
	}
	
}
