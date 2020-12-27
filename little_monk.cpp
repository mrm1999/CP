#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int n;
	cin>>n;
	long long int arr1[n];
	long long int arr2[n];
	for(int i=0;i<n;i++	)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++	)
	{
		cin>>arr2[i];
	}
	sort(arr1 , arr1 + n);
	sort(arr2 , arr2 + n);
	long long int a =0;
	for(int i=0;i<n;i++	)
	{
		a = a +abs(arr1[i]-arr2[i]);
		
	}
	
	cout<<a;
	return 0;	
		
}
