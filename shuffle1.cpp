#include <bits/stdc++.h>
using namespace std;
void s1(vector <int> &a , int k ,int i,int n)
{
	vector <int> temp;
	for(int j=i;j<n;j=j+k)
	{
		temp.push_back(a[j]);
	}
	sort(temp.begin() , temp.end());
	int m = 0;
	for(int j=i;j<n;j=j+k)
	{
		a[j] = temp[m];
		m++;
	}
}
void solve()
{
	int n;
	int i,k;
	cin>>n>>k;
	vector <int> a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<k;i++)
	{
		s1(a , k ,i ,n);
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
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
