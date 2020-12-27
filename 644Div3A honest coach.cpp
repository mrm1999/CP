#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t , i ,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a ,a+n);
		int diff[n-1];
		for(i=0;i<n-1;i++)
		{
			diff[i]= a[i+1]-a[i];
		}
		int min = INT_MAX;
		for(i=0;i<n-1;i++)
		{
			if(diff[i]<min)
			{
				min = diff[i];
			}
			
		}
		cout<<min<<endl;
	}
}
