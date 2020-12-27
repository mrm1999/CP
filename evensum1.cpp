#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
	int even = 2;
	int odd = 1;
	int recent = 1;
	int row = n;
	/*for(i=0;i<(n*n);i++)
	{
		arr[i +2] =arr[i] + 2;
		arr[i+3] = arr[i+1]+2; 
	}*/
	int i ,j;
	if(n>1)
	{
	
	for(i=0;i<n;i++)
	{
		if(recent<(n*n))
		{
		if(row!=0)
		{
				
		for(j=0;j<n;j++)
		{
			cout<<recent<<" ";
			recent++;
		}
		cout<<endl;
		recent = (recent-1) + n;
		row --;
	}
		if(row!=0)
		{
		
		for(j=0;j<n;j++)
		{
			cout<<recent<<" ";
			recent--;
		}
		cout<<endl;
		row--;
		recent = ((recent ) +n ) + 1;
	}
		
	}
	//cout<<recent<<endl;
	}
}
else 
{
	cout<<1<<endl;
}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int t , n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		solve(n);
	}
}
