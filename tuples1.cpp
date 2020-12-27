#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void solve(long long int p ,long long int q ,long long int r ,long long int a ,long long int b ,long long int c )
{
	long long int m , n ,o ,x,y,z;
	m = __gcd(p,a);
	n = __gcd(q,b);
	o = __gcd(r,c);
	x = a-p;
	y = b-q;
	z = c-r;
	int ans =0;
	bool f=false;
	bool g = false;
	bool h = false;
	bool sab = false;
	if(a>=p) f=true;
	if(b>=q) g =true;
	if(c>=r) h =true;
	if(f&&g&&h)
	{
		sab = true;
	}
	if(x==0 && y==0 && z==0)
	{
		ans = 0;
	}
	else if((x==y && (y==z||z==0)) || (z==y && (x==z||x==0)) || (x==z && (y==z||y==0)) ||( m!=1 && m==n && n==o && sab ) || (m==n&& m!=1 && z==0&& f && g) ||(n==o && n!=1 &&x==0 && g && h) || o==m && m!=1 && y==0 &&h && f )
	{
		ans = 1;
	}
	else if(x==0 || y==0 || z==0 ||(x==y)||y==z || z==x||(m==n &&m!=1 && f && g) || (n==o&& n!=1 && g && h )||(m==o && m!=1 && f && h) )
	{
		ans = 2;
	}
	else 
	{
		ans = 3;
	}
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
