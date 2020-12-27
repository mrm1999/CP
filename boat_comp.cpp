#include <bits/stdc++.h>
using namespace std;
int dimag(int a[] , int sum , int c[])
{
	int cnt=0;
	for(int i=1;i<sum/2;i++)
	{
		if(c[sum-i]>0)
		{
			cnt = cnt + min(c[i] , c[sum-i]);
		}
	}
	if(sum%2==0)
	{
		if(c[sum/2] > 0)
		{
			cnt = cnt + (c[sum/2]/2);
		}
	}
	return cnt;
	
}
void solve()
{
	int n;
	cin>>n;
	int b[101];
	int a[n];
	int c[51];
	int i,j;
	for(i=0;i<=100;i++)
	{
		b[i]=0;
		if(i<51)
		{
			c[i]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	
	sort(a , a+n );
	vector <int> sum;
	int temp=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				continue;
			}
			else
			{
				temp = a[i] + a[j];
				b[temp]++;	
			}
		}
	}
	for(i=1;i<=100;i++)
	{
		if(b[i]>0)
		{
			sum.push_back(i);
		}
	}
	int m = sum.size();
	int ans =0; 
	for(i=0;i<m;i++)
	{
		ans = max(ans ,dimag(a , sum[i] , c ));
	}
	cout<<ans;
	
}
int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	solve();
	}
}
