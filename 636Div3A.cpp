#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n , k ,p,i;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		k=2;
		p = pow(2,k) - 1;
		while(n>p)
		{
			if(n%p==0)
			{
				break;
			}
			k++;
			p = pow(2,k)-1;
		}
		
		cout<<n/p<<endl;
	}
	
	
}
