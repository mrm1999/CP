#include <bits/stdc++.h>
using namespace std;
int station(int d , int m,int n, int stops[])
{
	int cnt=0;
	int current = 0;
	int last;
	while(current<=n)
	{
		last = current;
		while(current<=n && stops[current+1]-stops[last]<=m)
		{
			current++;
		}
		if(current == last)
		{
			cnt = -1;
			break;
		}
		if(current<=n)
		{
			cnt++;
		}
		
	}
	return cnt;
	
}
int main()
{
	int i,d,m,n,ans;
	cin>>d;
	cin>>m;
	cin>>n;
	int stops[n+2];
	stops[0]=0;
	stops[n+1]=d;
	for(i=1;i<=n;i++)
	{
		cin>>stops[i];
	}
	ans = station(d , m ,n , stops);
	cout<<ans;
}
