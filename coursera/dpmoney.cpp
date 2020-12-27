#include <bits/stdc++.h>
using namespace std;
int  n;

int money(int n)
{
	int dp[n+1];
	if(n>0){
	
/*	if(x>0)
	{
	if(x<=2)
	{
		dp[x]=x;
	}
	if(x==3)
	{
		dp[x]=1;
	}
	if(x==4)
	{
		dp[x]=1;
	}
	if(x>4)
	{
		dp[x]= min(min(money(x-1 , n) , money(x-3, n)) , money(x-4 , n))+1;
		
	}*/
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	dp[3]=1;
	dp[4]=1;
	if(n>4)
	{
		for(int i=5;i<=n;i++)
		{
			dp[i] = min(min(dp[i-1] , dp[i-3]) , dp[i-4]) +1;
		}
	}
	
	return dp[n];
}
if(n<0)
{
	return 0;
}
}
int main()
{
	int ans;
	cin>>n;
	ans = money(n);
	cout<<ans;
	
}
