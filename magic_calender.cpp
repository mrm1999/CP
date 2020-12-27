#include <bits/stdc++.h>
using namespace std;
int main()
{
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long long int n ,r;
    cin>>t;
    while(t--)
    {
    	cin>>n>>r;
    	long long int ans =0;
    	long long int k=1;
    /*	for(k=1;k<=r;k++)
    	{
    		if(n>k)
    		{
    			ans = ans +k;
			}
			if(n==k)
			{
				ans = ans +1;
			}
		
		}*/
		if(n<=r)
		{
			ans = ((n*(n+1))/2) - n +1;
			
		}
		else
		{
			ans = ((r*(r+1))/2);
		}
		cout<<ans<<endl;
	}
}
