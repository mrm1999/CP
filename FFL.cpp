#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,s,i,temp,min_for,min_def;
	vector <int> p;
	vector <int> x;
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		p.clear();
		x.clear();
		for(i=0;i<n;i++)
		{
			cin>>temp;
			p.push_back(temp);
		}
		min_for = INT_MAX;
		min_def = INT_MAX;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			x.push_back(temp);	
		}
	
		for(i=0;i<n;i++)
		{
			if(x[i]==0 && min_for>=p[i])
			{
				min_for = p[i];
			}
			if(x[i]==1 && min_def>=p[i])
			{
				min_def = p[i];
			}
		}
		if(s+min_for+min_def<=100)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
		}
		return 0;	
	
}
