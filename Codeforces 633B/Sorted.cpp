#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	vector <long long int> a;
	long long int n = 0;
	long long int i;
	long long int temp;
	vector <long long int> ans;
	while(t--)
	{
		a.clear();
		ans.clear();
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);
			ans.push_back(temp);
		}
		sort(a.begin(), a.end());
		long long int loop =0;
		if(n%2==1)
		{
			loop = (n+1)/2;
		}
		else loop = n/2;
		long long int q=0;
		long long int r=0;
		if(n%2==0)
		{
		for(i = 0;i<loop;i=i+2)
		{
			ans[n-1-r] = a[n-1-q];
			ans[n-2-r] = a[q];
		 q++;
		 r=r+2;
		}
	}
	if(n%2==1)
	{
		for(i = 0;i<loop;i++)
		{
			ans[n-1-r] = a[n-1-q];
			ans[n-2-r] = a[q];
		 q++;
		 r=r+2;
		}
		ans[0]= a[n/2];
	}
		for( i=0;i<n;i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}
