#include <bits/stdc++.h>
using namespace std;
vector <long long int> dp;
 
int max(int n)
{

	if(n<=11)
	{
		return n;
	}
	if(dp[n]!= -1)
	{
		return dp[n];
	}
	return dp[n] = max(n/2) + max(n/3) + max(n/4);
		
	
}
int main()
{
	int t;
	long long int n ,i;
	cin>>t;
	while(t--)
	{
		dp.clear();
		cin>>n;
		for(i=0;i<=n;i++)
		{
			dp.push_back(-1);
		}
		cout<<max(n);
	}
}
