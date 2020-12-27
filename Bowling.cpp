#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n , k , l;
	cin>>n>>k>>l;
	if(k*l>=n && k>1)
	{
		int temp = 1;
		for(int i=1;i<=n;i++)
		{
			if(temp>k)
			{
				temp = 1;
			}
			cout<<temp<<" ";
			temp++;
		}
		cout<<endl;
	}
	else
	{
		cout<<-1<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
