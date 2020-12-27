#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	long long int k,n,temp,i;
	vector <long long int> a;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		a.clear();
		for(i=0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);
		}
		for(i=0;i<n-k;i++)
		{
			if(a[i+k]<a[i])
			{
				swap(a[i],a[i+k]);
			}
		}
		bool ans = true;
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				ans = false;				
			}
		}
		if(ans)
		{
			cout<<"yes"<<endl;
		}
		if(!ans)
		{
			cout<<"no"<<endl;
		}
	}
	
}
