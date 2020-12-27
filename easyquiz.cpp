#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a , b;
	cin>>a>>b;
	int arr[3];
	int i;
	for(i=0;i<3;i++)
	{
		arr[i] = 0;
	}
	arr[a-1]++;
	arr[b-1]++;
	for(i=0;i<3;i++)
	{
		if(arr[i] ==0)
		{
			cout<<i+1<<endl;
		}
	}
}
