#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t , p ,h;
	cin>>t;
	while(t--)
	{
		cin>>h>>p;
		bool chef = true;
		while(true)
		{
			h = h-p;
			if(h<=0)
			{
				chef = true;
				break;
			}
			p = p/2;
			if(p==0)
			{
				chef = false;
				break;
			}
			
		}
		if(chef)
		{
			cout<<1<<endl;
		}
		if(!chef)
		{
			cout<<0<<endl;
		}
		
	}
}
