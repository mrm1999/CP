#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t ,a ,b, ans;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(b>a)
		{
			swap(a,b);
		}
		if(a>=2*b)
		{
			ans = a*a;
		}
		else ans = 4*b*b;
		cout<<ans<<endl;
	}
}
