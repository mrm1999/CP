#include <bits/stdc++.h>
using namespace std;
int convert(long long int k)
{
	int sum = 0;
	while(k!=0)
	{
		sum = sum + (k%10);
		k = k/10;
	}
	return sum;
}
int main()
{
	int n;
	int t,i;
	cin>>t;
	int a[n];
	int b[n];
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
		}
		int o , p;
		int chef =0;
		int morty =0;
		for(i=0;i<n;i++)
		{
			o = convert(a[i]);
			p = convert(b[i]);
			if(o>p)
			{
				chef++;
			}
			if(p>o)
			{
				morty++;
			}
			if(o==p)
			{
				chef++;
				morty++;
			}
		}
		if(chef>morty)
		{
			cout<<0<<" "<<chef<<endl;
		}
		else if(chef < morty)
		{
			cout<<1<<" "<<morty<<endl;
		}
		else
		{
			cout<<2<<" "<<chef<<endl;
		}
	}
}
