#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool same = true;
		for(int i = 0 ;i<n-1;i++)
		{
			if(a[i] != a[i+1])
			{
				same = false;
				break;
			}
		}
		if(same)
		{
			cout<<n<<endl;
		}
		else
		{
			cout<<1<<endl;
		}
	}
}
