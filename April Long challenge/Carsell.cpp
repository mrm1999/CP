#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
	int test;
	cin>>test;
	long long int temp ,  total;
	vector <long long int> ans;
	vector <long long int> p;
	int z = test;
	while(test--)
	{
		long long int n;
		cin>>n;
		p.clear();
		for(long long int i = 0;i<n;i++)
		{
			cin>>temp;
			p.push_back(temp);
		}
		total = 0;
		sort(p.begin() , p.end() );
		for(long long int i =0;i<n;i++)
		{
			if((p[i]-n+(i+1))>0)
			{
				total = total + (p[i]-n+(i+1));
			}
			
		}
		total = total % 1000000007;
		ans.push_back(total);
	}
	for(int i=0;i<z ; i++){
		cout<<ans[i]<<endl;
	}
}
