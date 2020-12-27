#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long int n ,k;
	
	while(t--)
	{
		cin>>n;
		cin>>k;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		
		if(k%2 == 1 && k>3)
		{
			k = 3;
		}
		if(k%2 == 0 && k>3)
		{
			k == 2;
		}
		int i=0;
		while(i<k)
		{
			long long int p = *max_element(a , a+n);
			for(int j=0;j<n;j++)
			{
				a[j] = p - a[j];	
			}
			i++;	
		}
		for(int j=0;j<n;j++)
		{
			cout<<a[j]<<" ";		
		}
		cout<<endl; 
	}
}
