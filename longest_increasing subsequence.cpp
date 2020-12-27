#include <bits/stdc++.h>
using namespace std;
void longest_increasing_sub(int arr[] , int n)
{
	int i , j;
	int lis[n];
	for(i=0;i<n;i++)
	{
		lis[i] = 1;
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j] < arr[i])
			{
				lis[i] = max(1+lis[j] , lis[i]);
			}
		}
	}
	int m = INT_MIN;
	int index = -1;
	for(i=0;i<n;i++)
	{
		if(lis[i] > m)
		{
			m = lis[i];
			index = i;
		}
	}
	cout<<"The length of longest increasing subsequence is :-  "<<m<<endl;
	cout<<"The index is :"<<index<<endl;
	for(i=0;i<n;i++)
	{
		cout<<lis[i]<<" ";
	}
	cout<<endl;
	for(i=index ; i>=0 ;i--)
	{
		if(lis[i] == m)
		{
			cout<<arr[i]<<" ";
			m--;
		}
	}
	cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	longest_increasing_sub(arr , n);

		}	
}
