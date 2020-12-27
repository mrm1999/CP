#include <bits/stdc++.h>
using namespace std;
void longest_biotonic_sub(int arr[] , int n)
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
	int lds[n];
	for(i=0;i<n;i++)
	{
		lds[i] = 1;
	}
	reverse(arr ,arr + n);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j] < arr[i])
			{
				lds[i] = max(1+lds[j] , lds[i]);
			}
		}
	}
	reverse(lds , lds + n);
	reverse(arr , arr +n);
	int k = lis[0] + lds[0] - 1;
	int index1 =0 ;
	for(i=1;i<n;i++)
	{
		if(k<lis[i] + lds[i] - 1)
		{
			k = lis[i] + lds[i] - 1;
			index1 = i;
		}
	}
	cout<<"The length is "<<k<<endl;
	cout<<"The index is "<<index1<<endl;
	vector <int> part1;
	vector <int> part2;
	int p = lds[index1];
	int m = lis[index1];
	for(i=index1; i<n;i++)
	{
		if(lds[i] == p)
		{
			part2.push_back(arr[i]);
		}
	}
	for(i=index1;i>=0;i--)
	{
		if(lis[i] == m)
		{
			part1.push_back(arr[i]);
		}
	}
	reverse(part1.begin() , part1.end());
	for(i=0;i<part1.size()-1;i++)
	{
		cout<<part1[i]<<" ";
	}
	for(i=0;i<part2.size();i++)
	{
		cout<<part2[i]<<" ";
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
	longest_biotonic_sub(arr , n);

	}	
}

/*	int m = INT_MIN;
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
*/	
