#include <bits/stdc++.h>
using namespace std;
int main()
{
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,t , i;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		cout<<s[0];
		n = s.size();
		for(i=1;i<n;i=i+2)
		{
			cout<<s[i];
		}
		cout<<endl;
	}
}
