#include <bits/stdc++.h>
using namespace std;
void gold(int w[] , int n , int W)
{
	int dp[W+1][n+1];
	int val=0;
	int i , j;
	for(i=0;i<=n;i++)
	{
		dp[0][i]=0;
	}
	for(j=0;j<=W;j++)
	{
		dp[j][0] = 0;
	}
	for(j = 1;j<=n ; j++)
	{
		for(i=1;i<=W ; i++)
		{
			if(w[j-1]<=W)
			{
			
			dp[i][j] = max(dp[W-w[j-1]][j-1] + w[j-1] , dp[W][j-1]);
		}
			/*dp[i][j] = dp[W][j-1];
			if(w[j-1]<=W)
			{
				val = dp[W-w[j-1]][j-1] + w[j-1];
				
			}*/
		
		}
		
	}
	//int x = dp[n][W];
	for(i=0;i<=W;j++)
	{
		for(i=0;i<=W;i++)
		{
			cout<<dp[i][j]<<"  ";
		}
		cout<<endl;
	}
	//return x;
}
int main()
{
	int i, W , n;
	cin>>W>>n;
	int w[n];
	
	for(i=0;i<n;i++)
	{
		cin>>w[i];
	}
	//int ans = gold(w , n ,W);
	//cout<<ans;
	gold(w , n, W);
	
}
