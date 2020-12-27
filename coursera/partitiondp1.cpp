#include <bits/stdc++.h>
using namespace std;
void partition(int a[] ,int  n , int x)
{
	
	int i , j,sum;
	bool dp[x+1][n+1];
	for(i=0;i<=x;i++)
	{
		dp[i][0] = false;
	}
	for(j=0;j<=n;j++)
	{
		dp[0][j] = true;	
	}		
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=x;i++)
		{
			dp[i][j] = dp[i][j-1];
			if(a[j-1]<=i)
			{
				dp[i][j] = (dp[i][j-1] || dp[i-a[j-1]][j-1]);
			}
		}
	}
/*	for(j =1;j<=n;j++)
	{
		for(i=0;i<=x;i++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
*/	bool ans = dp[x][n];
	if(ans)
	{
		cout<<1;
	}
	else cout<<0;
	
}
int main()
{
	int n , i;
	cin>>n;
	int a[n];
	int sum = 0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum = sum +a[i];
	}
	
	if(sum%3!=0 || n<3)
	{
		cout<<0;
	}
	else
	{
		partition(a , n , sum/3);
	}
	 
}
