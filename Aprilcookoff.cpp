#include <bits/stdc++.h>
#include <cmath>
long long int mod = 1000000007;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int temp,n , t,a;
	cin>>t;
	long long int i,sum , p , q,o;
	while(t--)
	{
		sum=0;
		cin>>n>>a;
		q=1;
		for( i=1;i<=n;i++)
		{
			
			p=pow(a,q);
			a=a*p;
			q=q+2;
			sum = p + sum;
			
		}
		
		cout<<sum%1000000007<<endl;
		
	}
	
	
	
	
}
