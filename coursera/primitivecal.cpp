#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
	if(n>=0)
	{
		
	int dp[n+1];
	dp[1] = 0;
	dp[0]=0;
	for(int i = 2;i<=n;i++)
	{
		if(i%3==0 )
		{
		dp[i] = min(dp[i/3] , dp[i-1]) + 1;
		}
		else if(i%3!=0 && i%2 ==0)
		{
			dp[i] = min(dp[i/2] , dp[i-1])+1;
		}
		else if(i%3 !=0 && i%2 !=0)
		{
		/*	if(min( dp[i-(i%3)] , dp[i-1]) == dp[i-(i%3)])
			{
				dp[i] = dp[i/3] + i%3;
			 } 
			 else
			 {
			 	dp[i] = dp[i-1]+1;
			 }*/
			 dp[i] = min(dp[i-1]+1 , dp[i- (i%3)]+ i%3);
		}
	
		
		
	}
	cout<<dp[n]<<endl;
	vector <int> result;
	int x = n;
	int i = 1;
	while(x!=0)
	{
		result.push_back(x);
		if(x%2 !=0 && x%3 !=0)
		{
			x =x -1;
		}
		else if(x%2==0 && x%3==0)
		{
			if(dp[x/2] < dp[x/3])
			{
				x = x/2;
			}
			else 
			x = x/3;
		}
		else if(x%2 ==0 && x%3 != 0)
		{
			if(dp[x-1]<dp[x/2])
			{
				x = x -1;
			}
			else
			x = x/2;
		}
		else if(x%2 !=0 && x%3 ==0)
		{
			if(dp[x-1]<dp[x/3])
			{
				x = x-1;
			}
			else
			x=x/3;
		}
		
	}
	for(i = result.size()-1 ;i>0 ;i--)
	{
		cout<<result[i]<<" ";
	}
	cout<<n;
}
}

int main()
{
	int n;
	
	cin>>n;
	solve(n);
}

