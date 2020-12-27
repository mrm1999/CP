#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int m, i , x ,y ,n;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>n;
		long long int ans = 0;
		m = n-x;
		for(i=n;i>=m;i--)
		{
			if(i%x == y)
			{
				ans = i;
				break;
			}
		}
		cout<<ans<<endl;
	}
}
