#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long int t;
	cin>>t;
	vector <char> alpha;
	for(char i ='a' ; i<='z' ; i++)
	{
		alpha.push_back(i);
	}
	long long int n,a,b;
	while(t--)
	{
		cin>>n>>a>>b;
		int x =0;
		int z=b;
		if(a!=b)
		{
		for(int u=0;u<n;u++)
		{
			cout<<alpha[x];
			z--;
			if(z>0)
			{
				x++;
			}
			if(z==0){
				z=b;
				x=0;
			}
		}}
		if(a==b)
		{
			for(int u=0;u<n;u++)
			{
				cout<<alpha[x];
				x++;
			}
		}
		cout<<"\n";
		 
	}
}
