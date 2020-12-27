#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	int k,i;
	int ans=0;
	cin>>n>>k;
	int w[n];
	for(i=0;i<n;i++)
	{
		cin>>w[i];
		if(w[i]>k)
		{
			ans = -1;
		}
	}
	if(ans == -1)
	{
		cout<<-1<<endl;
	}
	else
	{
		int temp=0;
		for(i=0;i<n;i++)
		{
			while(temp<=k && i<n)
			{
				temp = temp + w[i];
				if(temp+w[i+1] <= k && i+1<n)
				{
					i++;
				}
			}
			temp = 0;
			ans++;
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
