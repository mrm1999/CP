#include <bits/stdc++.h>
using namespace std;
int main()
{
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	if(n%2==1)
    	{
    		cout<<(n/2)+1<<endl;
		}
		else
		{
			cout<<(n/2)<<endl;
		}
	}
}
