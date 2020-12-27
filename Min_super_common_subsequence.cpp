// we have to find  shortest common subsequence such that both s1 and s2 should be a part of that sequence. 
#include <bits/stdc++.h>
using namespace std;
void shortest_com_subsequence(string s1 , string s2, int n , int m)
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
	len = m + n - len;
	cout<<"The length of shortest common supersequence :- "<< len<<endl;
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
	cout<<"The Super Common Subsequence is :- "<< s3;
	
}
int main()
{
	string s1;
	string s2;
	cout<<"String 1 :- ";
	cin>>s1;
	cout<<"String 2 :- ";
	cin>>s2;
	int n,m;
	n = s1.size();
	m = s2.size();
	shortest_com_subsequence(s1 , s2 , n , m);
}
