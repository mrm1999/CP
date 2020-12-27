#include <bits/stdc++.h>
using namespace std;
struct mlcds{
	int a;
	int b;
};
bool cmp(mlcds x , mlcds y)
{
	return x.a < y.a;
}
void solve(mlcds arr[] , int n)
{
	int i , j;
	sort(arr , arr + n , cmp);
	int mlca[n];
	for(i=0;i<n;i++)
	{
		mlca[i] = 1;	
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j].b < arr[i].a)
			{
				mlca[i] = max(mlca[i] , 1+mlca[j]);	
			}	
		}	
	}
	int m = INT_MIN;
	int index = -1;
	for(i=0;i<n;i++)
	{
		if(mlca[i] > m)
		{
			m = mlca[i];
			index = i;
		}	
	}
	cout<<"The Length is :- "<<m<<endl;
	mlcds ans[m];
	int k = m-1;
	int siz = m;
	for(i=index;i>=0;i--)
	{
		if(mlca[i] == m )
		{
			ans[k].a = arr[i].a;
			ans[k].b = arr[i].b;
			m--;
			k--;
		}
	}
	for(i=0;i<siz;i++)
	{
		cout<<ans[i].a<<" "<<ans[i].b<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	struct mlcds arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].a>>arr[i].b;
	}
	solve(arr , n);
}
