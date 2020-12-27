#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll x , y , a , b,sum;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		cin>>a>>b;
		if(b>=2*a)
		{
			sum = (x+y)*a;
		}
		else
		{	
			if(x>=y) sum=(y*b)+((x-y)*a);
			if(y>x) sum=(x*b)+((y-x)*a);
			
		}
		cout<<sum<<endl;

	}
}
