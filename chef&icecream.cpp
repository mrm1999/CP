#include <bits/stdc++.h>
using namespace std;
void solve(int arr[] , int n)
{
	int a[3];
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	bool ans = true;
	bool first = true;
	if(arr[0]==5)
	{
		a[0]++;
	}
	else
	{
		first = false;
	}
	
	for(int i=1;i<n;i++)
	{
			if(arr[i]==5)
			{
				a[0]++;
			}
			else if(arr[i]==10 && a[0] !=0)
			{
				a[1]++;
				a[0]--;
			}
			else if(arr[i]==15 && (a[0]>=2 || a[1] !=0))
			{
				a[2]++;
				if(a[1] != 0)
				{
					a[1]--;
				}
				else
				{
					a[0] = a[0] -2;
				}
			}
			else
			{
				ans = false;
			}
			
	}
	if(ans && first)
	{
		cout<<"YES"<<endl;	
	}	
	else
	{
		cout<<"NO"<<endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t , n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		solve(arr , n);
	}
	
	
}
