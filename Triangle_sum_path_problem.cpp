#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector <int> > arr , int n)
{
	int i ,j,level;
	level = n-2;
	while(level>=0)
	{
		for(j=0;j<=level;j++)
		{
			arr[level][j] = arr[level][j] + min(arr[level+1][j] , arr[level+1][j+1]);
		}
		level--;
	}
	cout<<arr[0][0]<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	vector<vector <int> > arr(n , vector<int>(n ,0 ));
	for(int i=0;i<n;i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cin>>arr[i][j];
		}
	}
	solve(arr , n);	
	}
	
}
