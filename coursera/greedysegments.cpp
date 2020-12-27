#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n] , b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	sort(b,b+n);
	int cnt = 1;
	for(i=0;i<n;i++)
	{
		if(a[i+1]>b[i])
		{
			cnt++;
		}
	}
	cout<<cnt;
}
