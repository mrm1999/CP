#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans =0;
	sort(arr , arr + n);
	for(int i =0;i<n;i=i+2)
	{
		ans = ans + arr[i+1]-arr[i];
	}
	cout<<ans;
}

