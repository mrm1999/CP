#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int temp,i;
	vector <int> a;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		a.push_back(temp);
	}
	int cnt = 0;
	int x,y;
	for(i=0;i<n;i++)
	{
		if(a[i] == 1)
		{
			x = i;
			break;
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(a[i] == 1)
		{
			y = i;
			break;
		}
	}
	for(i=x;i<=y;i++)
	{
		if(a[i] == 0)
		{
			cnt++;
		}
	}
	
	cout<<cnt<<endl;
	
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
