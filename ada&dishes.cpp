#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	vector <int> c;
	int i, temp;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		c.push_back(temp);
	}
	sort(c.begin() , c.end());
	int tm = 0;
	reverse(c.begin() , c.end());
	for(i=0;i<n;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i=i+2)
	{
		if(i+1<n)
		{
			tm = tm + min(c[i] , c[i+1]);	
		}
		else
		{
			tm = tm + c[i];
		}
		
		if(i+3<n)
		{
			c[i+3] = c[i+3] + abs(c[i]-c[i+1]);
		}
		else if(i+2<n)
		{
			c[i+2] = c[i+2] + abs(c[i]-c[i+1]);
		}
		cout<<i<<" "<<tm<<endl;
		
	}
	if(n%2 == 0)
	{
		tm = tm + abs(c[n-2]-c[n-1]);
	}

	cout<<"final  "<<tm<<endl;
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
