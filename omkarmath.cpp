#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
long long int lcm (long long int a, long long int b)
{
	return a*b/gcd(a,b);
}
int main()
{
	int t;
	long long int n;
	cin>>t;
	long long int y, a,b ,x ,o,p;
	while(t--)
	{
		cin>>n;
		if(n%2==0)
		{
			a = n/2;
			b = n/2;
		}
		else
		{
			a=1;
			b=n-1;
			x = lcm(a,b);
			for(int i=0;i<=n/2;i++)
			{
				a++;
				b--;
				y = lcm(a,b);
				if(y<=x)
				{
					o =a;
					p =b;
					x=y;
				}
			}
			a=o;
			b=p;
		}
		cout<<a<<" "<<b<<endl;
		
	}
}
