// Longest repeating subsequence. We have to find the number of longest repeating subsequence
#include <bits/stdc++.h>
using namespace std;
void longest_repeating_subsequence(string x ,string y , int n , int m)
{
	int i,j;
	int dp[n+1][m+1];
	for(i=0;i<=n;i++)
	{
		dp[i][0] = 0;
	}
	for(j=0;j<=m;j++)
	{
		dp[0][j] = 0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(x[i-1] == y[j-1] && i!=j)
			{
				dp[i][j] = 1+dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
			}
		}
	}
	int len = dp[n][m];
	cout<<"The longest no  of repeating subsequence is :- "<<len<<endl;
}
int main()
{
	string x;
	string y;
	int n;
	int m;
	cout<<"String 1:- ";
	cin>>x;
	y = x;
	
	n = x.size();
	m = y.size();
	longest_repeating_subsequence(x , y , n ,m);

}
