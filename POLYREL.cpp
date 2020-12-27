#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int x[n];
	int y[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	if(n<=5)
	{
		cout<<n<<endl;
	}
	else
	{
		int ans = n;
		while(n>5)
		{
			n = n/2;
			ans = ans + n;
		}
		cout<<ans<<endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
		solve();	
	}
}
