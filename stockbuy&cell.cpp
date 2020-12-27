#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	vector <int> arr(n);
	for(int j=0;j<n;j++)
	{
		cin>>arr[j];
	}
	int i=0;
	int profit = 0;
	while(i<n)
	{
		while(arr[i] < arr[i+1] && i+1<n)
		{
			profit = arr[i+1] - arr[i] + profit;
			i++;
		}
		
	}
	if(profit == 0)
	{
		cout<< -1;
	}
	else
	{
		cout<<profit;
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
