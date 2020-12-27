#include <bits/stdc++.h>
using namespace std;
void longest_pallandrome(string x , string y ,int n ,int m)
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
		for(j=0;j<=m;j++)
		{
			if(x[i-1] == y[j-1])
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
	string s = "";
	i=n;
	j=m;
	while(i>0 && j>0)
	{
		if(x[i-1] == y[j-1])
		{
			s.push_back(x[i-1]);
			i--;
			j--;
		}
		else
		{
			if(dp[i][j-1] > dp[i-1][j])
			{
				j--;
			}
			else
			{
				i--;
			}
		}
	}
	reverse(s.begin() , s.end());
	cout<<"The length of longest pallandrome is:-  "<<len<<endl;
	cout<<"The Longest pallandrome is:- "<<s;
	
	
	
}
int main ()
{
	string x;
	string y;
	int n;
	int m;
	cout<<"String 1:- ";
	cin>>x;
	y = x;
	reverse(y.begin() , y.end());
	n = x.size();
	m = y.size();
	longest_pallandrome(x , y , n ,m);
}
