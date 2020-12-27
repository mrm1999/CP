#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	long long int i , a,b,ans;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(b>a)
		{
			swap(a,b);
		}
		if(a ==0 || b==0)
		{
			cout<<0<<endl;
	
		}
		else if (a >= 2*b)
		{
			cout<<b<<endl;
		}
		else
		{
			cout<<(a+b)/3<<endl;
		}
		}
}
