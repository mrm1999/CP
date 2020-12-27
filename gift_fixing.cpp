#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	long long int a[n];
	long long int b[n];
	long long int x , y;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	x = a[0];
	y = b[0];
	for(i=0;i<n;i++)
	{
		if(x > a[i])
		{
			x = a[i];
		}
		if(y > b[i])
		{
			y = b[i];
		}
	}
//	cout<<x<<" "<<y;
	long long int cnt = 0;
	long long int temp;
	for(i=0;i<n;i++)
	{
		temp = min(a[i] - x , b[i] -y);
		cnt = temp + cnt;
		if(a[i] - x < b[i] - y)
		{
			cnt = cnt + b[i] - y -temp;
		}
		else
		{
			cnt = cnt + a[i] - x -temp;
		}
	}
	cout<<cnt<<endl;	
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
