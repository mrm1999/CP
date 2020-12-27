#include <bits/stdc++.h>
using namespace std;
void solve(string s1 , int n)
{
	string s2 = s1;
	reverse(s2.begin() , s2.end());
	int i ,j;
	int dp[n+1][n+1];
	for(i=0;i<=n;i++)
	{
		dp[i][0] = 0;
		dp[0][i] = 0;
	}
	int mn = INT_MIN;
	int index;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(s1[i-1] == s2[j-1])
			{
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = 0;
			}
			if(dp[i][j] > mn)
			{
				mn = dp[i][j];
				index = i;
			}
		}
	}
	/*
	int cnt=0;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(dp[i][j]>0)
			{
				cnt = cnt + 1;
			}
		}
	}*/
	cout<<"The Total Number is : "<<dp[n][n]<<endl;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
		
}
int main()
{
	string s1;
	cin>>s1;
	int n = s1.size();
	solve(s1 , n);
}
