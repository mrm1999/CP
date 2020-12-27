#include <bits/stdc++.h>
using namespace std;
void longest_common_substring(string x , string y ,int n ,int m)
{
	int dp[n+1][m+1];
	int i,j;
	int row , col;
	for(i=0;i<=n;i++)
	{
		dp[i][0] = 0;
	}
	for(j=0;j<=m;j++)
	{
		dp[0][j] = 0;
	}
	int result = 0;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(x[i-1] == y[j-1])
			{
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = 0;
			}
			if(dp[i][j] > result)
			{
				result = dp[i][j];
				row = i;
				col = j;
			}
		}
	}
	string s = "";
	while(dp[row][col] != 0)
	{
		s.push_back(x[row-1]);
		row--;
		col--;
	}
	reverse(s.begin(), s.end());

	
	{
		cout<<s;
	}
	
	
}
int main()
{
	string x;
	string y;
	int n;
	int m;
	cout<<"String 1:- ";
	cin>>x;
	cout<<"String 2:- ";
	cin>>y;
	n = x.size();
	m = y.size();
	longest_common_substring(x , y , n ,m);
	//cout<<"The length of longest common substring is:- "<<len;

}
