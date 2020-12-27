#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int n ,sum,diff1,diff2 ,q ,t , temp1, temp2,i;
	vector <long long int> f;
	vector <long long int> d;
	cin>>t;
	while(t--)
	{
		f.clear();
		d.clear();
		sum = 0;
		cin>>n;
		cin>>q;
		for(i=0;i<q;i++)
		{
			cin>>temp1>>temp2;
			f.push_back(temp1);
			d.push_back(temp2);
		}
		if(f[0]>d[0])
		{
			sum=(2*f[0])-d[0];
		}
		if(f[0]<=d[0])
		{
			sum=d[0];
		}
		for(i=0;i<q-1;i++)
		{
			diff1 = d[i]-f[i+1];
			if(diff1<0)
			{
				diff1 = diff1*(-1);
			}
			diff2 = d[i+1]-f[i+1];
			if(diff2<0)
			{
				diff2 = diff2*(-1);
			}
			
			sum = sum + diff1 + diff2;
			cout<<sum<<" "<<diff1<<" "<<diff2<<endl;
		}
		
		cout<<sum<<endl;
	}
	
}
