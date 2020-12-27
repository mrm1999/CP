#include <bits/stdc++.h>
using namespace std;
int solve(int x)
{
	int m = x%10;
	int n = 0;
	while(x!=0)
	{
		x = x/10;
		n++;
	}
	
	int ans = (m-1)*10;
	if(n==1)
	{
		ans = ans +1 ;
	}
	else if(n==2)
	{
		ans = ans +3 ;
	}
	else if(n==3)
	{
		ans = ans +6 ;
	}
	else if(n==4)
	{
		ans = ans +10;
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	int x;
	while(t--)
	{
		cin>>x;
		int ans = solve(x);
		cout<<ans<<endl;
		
	}
}
