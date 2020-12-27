#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int t , i ,n,cnt;
	long long int actual[n];
	long long int real[n];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>real[i];
			
		}
		for(i=0;i<n;i++)
		{
			actual[i] = i+1;
			cout<<actual[i]<<" ";
		}
		cout<<endl;
		cnt = 0;
		for(i=0;i<n;i++)
		{
			if(real[i] == actual[i])
			{
				cnt++;
			}
		}
		if(cnt==n)
		{
			cout<<0<<endl;
		}
		else if(cnt==0)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<2<<endl;
		}
		
		
	}
	
}
