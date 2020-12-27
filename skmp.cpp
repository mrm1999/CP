// we have to find  shortest common subsequence such that both s1 and s2 should be a part of that sequence. 
#include <bits/stdc++.h>
using namespace std;
string solve (string s1 , string s2, int n , int m)
{
	int dp[n+1][m+1];
	int i,j;
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
			if(s1[i-1] == s2[j-1])
			{
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
			}
		}
	}
	int len = dp[n][m];
	i = n;
	j = m;
	string s3 = "";
	while(i>0 && j>0)
	{
		if(s1[i-1] == s2[j-1] )
		{
			s3.push_back(s1[i-1]);
			i--;
			j--;
		}
		else
		{
			if(dp[i-1][j] > dp[i][j-1])
			{
				s3.push_back(s1[i-1]);
				i--;
			}
			else
			{
				s3.push_back(s2[j-1]);
				j--;
			}
		}
	}
	while(i>0)
	{
		s3.push_back(s1[i-1]);
		i--;
	}
	while(j>0)
	{
		s3.push_back(s2[j-1]);
		j--;
	}
	reverse( s3.begin() , s3.end());
	return s3;
}
int main()
{
	string s1;
	string s2;
	string s3;
	int t;
	int n,m;
	cin>>t;
	while(t--)
	{
		cin>>s1;
		cin>>s2;
		n = s1.size();
		m = s2.size();
		s3= solve(s1 , s2 , n , m);
		cout<<s3<<endl;
	}
}
