#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	int k , m;
	cin>>k;
	cin>>m;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<(arr[m]^arr[m+k])<<endl;
}
