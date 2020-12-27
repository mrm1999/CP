#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a , a+n);
	bool pos = true;
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]-a[i] > 1)
		{
			pos = false;
			break;
		}
	}
	if(pos)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
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
