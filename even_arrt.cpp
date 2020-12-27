#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t , n ,i;
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		//int rem[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		//	rem[i] = arr[i]%2;
		}
		bool hai = true;
		int cnt = 0;
		
		vector <int> k;
		k.clear();
		for(i=0;i<n;i++)
		{
			if(i%2 != arr[i]%2)
			{
				cnt++;
				k.push_back(i);
				
			}
		}
		if(cnt==0)
		{
			cout<<0;
		}
		else
		{
		int m = k.size();
		int rem[m];
		int evt =0;
		int odt = 0;
		int even = 0;
		int odd = 0;
		
		for(i=0;i<m;i++)
		{
			if(k[i]%2==0)
			{
			evt++;	
			}	
			if(k[i]%2==1)
			{
				odt++;
			}
			if(arr[k[i]] % 2==0)
			{
				even++;
			}
			if(arr[k[i]]%2==1)
			{
				odd++;
			}
		}
		if(evt == odt && even == odd)
		{
			cout<<evt<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	
		}
		
	}
}
