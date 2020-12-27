#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n , m;
	cin>>n>>m;
	
	int time[m];
	for(int i = 0;i<m;i++)
	{
		cin>>time[i];
	}
	if(n<=m)
	{
	int ans[m];
	for(int i=0 ; i<n;i++)
	{
		ans[i] = 0;
	}
	for(int i=n;i<m;i++)
	{
		ans[i]= time[i-n] + ans[i - n];
	}
	for(int i=0;i<m;i++)
	{
		cout<<i%n<<" "<<ans[i]<<endl;
	}
	}
}
