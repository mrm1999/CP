#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n , i;
	
	while(t--)
	{
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];	
		}
		long long int cnt = 0;
		long long int temp;
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp = a[i];
				while(a[i+1] < temp && i<=n-1)
				{
					i++;
				}
				cnt = cnt + temp - a[i];
			}
		}
		cout<<cnt<<endl;
		
	
	
	
	}	

}
