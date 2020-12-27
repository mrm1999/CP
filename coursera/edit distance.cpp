#include <bits/stdc++.h>
using namespace std;
void solve(string str1 , string str2 , int m ,int n)
{
	int dp[m+1][n+1];
	int i , j;
	for(i=0;i<=m;i++)
	{
		dp[i][0] = i;
	}
	for(j = 0;j<=n ;j++)
	{
		dp[0][j] = j;
	}
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=m;i++)
		{
			if(str1[i-1]==str2[j-1])
			{
				dp[i][j] = min(min(1+dp[i-1][j] , 1+dp[i][j-1] ), dp[i-1][j-1]);
			}
			else
			{
				dp[i][j] = min(min(1+dp[i-1][j] , 1+dp[i][j-1] ), dp[i-1][j-1]+1);
			}
		}
	}
	/*for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	}
int main()
{
	string str1 , str2;
	cin>>str1>>str2;
	int m = str1.length();
	int n = str2.length();
	solve(str1 , str2 , m ,n);
	
}
