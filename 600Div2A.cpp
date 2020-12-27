#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int temp,n , t,i;
	cin>>t;
	vector <int> a;
	vector <int> b;
	vector <int> d;
	while(t--)
	{
	a.clear();
	b.clear();	
	d.clear();
	cin>>n;	
	for(i=0;i<n;i++)
	{
		cin>>temp;
		a.push_back(temp);
		d.push_back(temp);
	}
	for(i=0;i<n;i++)
	{
		cin>>temp;
		b.push_back(temp);
	}
	for(i=0;i<n;i++)
	{
		d[i]= b[i] - a[i];
	}
	int l=0;
	int r = 0;
	for(i=0;i<n;i++)
	{
		if(d[i]!=0)
		{
			l=i;
			break;
		}
	}
	bool isAns = true;
	for(i=n-1;i>=0;i--)
	{
		if(d[i]!=0)
		{
			r=i;
			break;
		}
	}
	for(i=l;i<r;i++)
	{
		if(d[i]!=d[i+1]|| d[i]<0)
		{
			isAns = false;
		}
	}
	
	if(l==r)
	{
		if(d[i]<0) {
		isAns = false;
	}
	}
	
	
		
		
		
		
		
		
		if(isAns)
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	
	
	}
	
}
