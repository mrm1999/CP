#include <bits/stdc++.h>
using namespace std;
void solve(string name)
{
	int i , k;
	bool hai = false;
	int n = name.size();
	int ans = 0;
	for(i=0;i<n;i++)
	{
		if(name[i] == 'x' && name[i+1] == 'y' || name[i] == 'y' && name[i+1] == 'x')
		{
			ans++;
			i++;
		}
	}
	cout<<ans<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	string chef;
	cin>>t;
	while(t--)
	{
		cin>>chef;
		solve(chef);
	}
}
