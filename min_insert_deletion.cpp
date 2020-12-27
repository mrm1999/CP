// min num of insertion and deletion to convert string a to string b
#include <bits/stdc++.h>
using namespace std;
void min_insert_del(string s1 , string s2 , int n ,int  m)
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
	int insert = m - len;
	int delet = n - len;
	cout<<"Insertation :- "<<insert<<endl;
	cout<<"Deletion :- "<< delet;
	
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
	min_insert_del(s1 , s2 , n , m);

}
