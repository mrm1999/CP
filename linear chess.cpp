#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long int n , k,temp,i;
	vector <long long int> arr;
	while(t--)
	{
		arr.clear();
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			arr.push_back(temp);
		}
		sort(arr.begin() , arr.end());
		long long int ans = 0;
		bool pos = false;
		for(i=0;i<n;i++)
		{
			if(k%arr[i] == 0)
			{
				ans = max(ans , arr[i]);
				pos = true;
			}
		}
		if(pos)
		{
			cout<<ans<<endl;
		}
		else 
		{
			cout<<-1<<endl;
		}
	}
}
