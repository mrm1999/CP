#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t , temp;
	cin>>t;
	vector <int> arr;
	vector <int> diff;
	bool abc[t];
	int g=0;
	while(g<t)
	{
		int n;
		arr.clear();
		diff.clear();
		cin>>n;
		for(int i =0;i<n;i++)
		{
			cin>>temp;
			arr.push_back(temp);
		}
		int c=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==1)
			{
				diff.push_back(i);
				c++;
			}
		}
		bool ans = true;
		if(c==1)
		{
			ans = true;
		}
		else
		{
		for(int a=0;a<c-1;a++)
		{
			if(diff[a+1] - diff[a] < 6)
			{
				ans = false;
				break;
			}
		}
		}
		abc[g] = ans ;
		
		g++;
	}
	string d[t];
	for(int i=0;i<g;i++)
	{
	if(abc[i]== false)
		{
			d[i] = "NO";
		}
		else
		{
			d[i]= "YES";
		}
		}
	for(int i=0;i<g;i++)
	{
		cout<<d[i]<<endl;
	}
}
