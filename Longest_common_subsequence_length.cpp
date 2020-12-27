#include <bits/stdc++.h>
using namespace std;
void longest_common_subsequence(string A , string B ,int n ,int m)
{
	m = A.length();
	n = B.length();
    int dp[m+1][n+1];
	int i,j;
	for(i=0;i<=m;i++)
	{
		dp[i][0] = 0;
	}
	for(j=0;j<=n;j++)
	{
		dp[0][j] = 0;
	}
	for(i=1;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(A[i-1] == B[j-1])
			{
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
			}
		}
	}
	
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
/*	string s = "";
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
	
	cout<<s;
*/	
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
	longest_common_subsequence(x , y , n ,m);
	

}
