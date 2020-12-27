#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long long int n,i,k,m;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	if(n%4==0)
    	{
    		cout<<"YES"<<endl;
    		m = n/2;
    		k = n/2 -1;
			for(i=1;i<=n/2;i++)
    		{
    			cout<<2*i<<" ";
			}
			for(i=1;i<n/2;i++)
			{
				cout<<(2*i)-1<<" ";
			}
			cout<<(m*(m+1))-(k*k)<<endl;
			
		}
		else
		{
			cout<<"NO"<<endl;
		}
    	
	}
}
