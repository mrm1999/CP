#include <bits/stdc++.h>
using namespace std;
long long int sleep (long long int a , long long int b , long long int c ,long long int d)
{
	long long int sum=0;
	if(b>=a)
	{
		sum=b;
	}
	if(b<a)
	{
		
		sum=b;
		if(c-d<=0)
		{
			sum = -1;
		}
		if((a-b)%2==1)
		{
			sum = sum + ((((a-b)/(c-d))+1))*c;
		}
		if((a-b)%2==0)
		{
			sum = sum + ((((a-b)/(c-d))))*c;
		}
		
		
	}
	return sum;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long int a,b,c,d,i,ans,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
	ans = sleep(a,b,c,d);
	cout<<ans<<endl;
	}
	
	
}
