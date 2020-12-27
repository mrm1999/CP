#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n , m;
	cin>>n>>m;
	char mat[n][m];
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>mat[i][j];
		}
	}
	int cnt = 0;
	for(j=0;j<m;j++)
	{
		if(mat[n-1][j]== 'D')
		{
			cnt++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(mat[i][m-1]== 'R')
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
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
