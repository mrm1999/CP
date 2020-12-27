#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t , n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int i , j;
		/*for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<j+recent;
			}
			recent = recent
		}*/
		if(n==1)
		{
			cout<<1<<endl;
		}
		if(n==2)
		{
			cout<<1<<" "<<2<<endl;
			cout<<4<<" "<<3<<endl;
		}
		if(n>2)
		{
			cout<<1<<" "<<2<<" ";
			for(i=2;i<n;i++)
			{
				cout<<3+i<<" ";
			}
			cout<<endl;
			cout<<4<<" "<<3<<" ";
			for(i=n+3;i<=2*n;i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;
			int x = (2*n)+1;
			for(i=2;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					cout<<x<<" ";
					x++;
				}
				cout<<endl;
			}
		}
	}
}
