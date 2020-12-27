#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int k , i ,j ,cnt;
	while(t--)
	{
		cin>>k;
		int a =1;
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				if(a!=0 && k!=0)
				{
					cout<<"O";
					a--;
					k--;
				}
				else if(k!=0)
				{
					cout<<".";
					k--;
				}
				else
				{
					cout<<"X";
				}
				
				
			}
			cout<<endl;
		}
	}
}
