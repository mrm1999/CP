#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int x , n ,m , i;
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>x>>n>>m;
		for(i=0;i<n;i++)
		{
		if(x>=20)	
		{
		x = x/2 + 10;
		}
		if(x<20){
			x=x;
		}}
		if(x - (10*m) <=0)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
		}	
			
			

			
	}
			

