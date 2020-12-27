#include <bits/stdc++.h>
using namespace std;
void solve(long long int p ,long long int q ,long long int r ,long long int a ,long long int b ,long long int c )
{
	int ans = 0;
	if(p==a && q==b&&r==c)
	{
		ans = 0;
	}
	else if( (p-a == q-b && q-b == r-c) || ( a%p==0 && b%q==0 && c%r==0 && a/p == b/q && b/q == c/r ))
	{
		ans = 1;
	}
	else if( (p-a == q-b && r==c) || (q-b == r-c && p==a) || (r-c == p-a && q==b )|| (a%p==0 && b%q==0 && a/p == b/q && r==c) || (b%q==0 && c%r==0 && b/q == c/r && a==p) || (a%p==0 && c%r==0 && a/p ==c/r && b==q) )
	{
		ans = 1;
	}
	else if( p-a == q-b || q-b == r-c || r-c == p-a || (a%p==0 && b%q==0 && a/p == b/q) || (b%q==0 && c%r==0 && b/q == c/r) || (a%p==0 && c%r==0 && a/p ==c/r) )
	{
		ans = 2;
	}
	else ans = 3;
	cout<<ans<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t;
	long long int a , b, c ,p ,q,r;
	cin>>t;
	while(t--)
	{
		cin>>p>>q>>r;
		cin>>a>>b>>c;
		// we have to convert pqr = abc
		solve(p ,q,r,a,b,c);
	}
}
