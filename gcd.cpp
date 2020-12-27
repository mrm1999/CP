#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
	
}
int main()
{
	long long int a ,b,ans,lcm;
	cin>>a>>b;
	ans = (a*b)/gcd(a,b);
	cout<<ans<<endl;
	
}
