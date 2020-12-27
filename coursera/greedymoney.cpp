#include <bits/stdc++.h>
using namespace std;
int money(int x)
{
	int cnt=0;
	while(x!=0)
	{
		if(x>=10)
		{
			x=x-10;
			cnt++;
		}
		else if(x>=5 && x<10)
		{
			x=x-5;
			cnt++;
		}
		else if(x<5)
		{
			x=x-1;
			cnt++;
		}
	}
	return cnt;
}
int main()
{
	int n,ans;
	cin>>n;
	ans = money(n);
	cout<<ans;
}
