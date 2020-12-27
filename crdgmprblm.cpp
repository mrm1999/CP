#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long int c , r;
	while(t--)
	{
		cin>>c>>r;
		long long int s1,s2;
		if(c%9 == 0)
		{
			s1 = c /9;
		}
		else
		{
			s1 = (c/9)+1;
		}
		if(r%9 ==0)
		{
			s2 = r / 9;
		}
		else
		{
			s2 = (r/9) +1;
		}
		if(s2 > s1)
		{
			cout<<0<<" "<<s1<<endl;
		}
		else
		{
			cout<<1<<" "<<s2<<endl;
		}
	}
}
