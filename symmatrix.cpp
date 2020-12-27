#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n , m;
		int a , b,c,d;
		bool pos = false;
	//	bool pos1 = false;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			cin>>a>>b;
			cin>>c>>d;
			if(b==c)
			{
				pos = true;
			}
			
		}
		if(m%2==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			if(pos==true)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
}
