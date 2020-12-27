#include <bits/stdc++.h>
using namespace std;
long long int search(long long int a[] , int l , int r , long long int x)
{
	if(r>=l)
	{
	int mid = (l+r)/2;
	if(a[mid]==x)
	{
		return mid;
	}
	else if(x<a[mid])
	{
		search(a , l,mid-1 ,x);
	}
	else if(x>a[mid])
	{
		search(a,mid+1,r,x);
	}
}
	else return -1;
}
int main()
{
	int n , k,i,j;
	cin>>n;
	long long int ans,y;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	long long int b[k];
	for(j=0;j<k;j++)
	{
		cin>>b[j];
	}
	
//	sort(a ,a +n);
	for(j=0;j<k;j++)
	{
		
		ans = search(a ,0,n - 1 ,b[j]);
		cout<<ans<<" ";
	}
}
