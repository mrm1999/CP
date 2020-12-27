#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	vector <long long int> a;
	long long int temp;
	for(int i = 0;i<n;i++)
	{
		cin>>temp;
		a.push_back(temp);
	}
	bool pos = false;
	for(int i=1;i<n;i++)
	{
		if(a[i] != a[0])
		{
			pos = true;
		}
	}
	if(!pos)
	{
		cout<<-1<<endl;
	}
	else
	{
		temp = INT_MIN;
		int index =0;
		for(int i=0;i<n;i++)
		{
			if(a[i] > temp && ((a[i]!=a[i-1] && i-1>=0) ||(a[i]!=a[i+1] && i+1<n) ))
			{
				temp = a[i];
				index = i;
			}
		}
		cout<<index+1<<endl;
		
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
