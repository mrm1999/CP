#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int n;
	vector <long long int> x;
	vector <long long int> y;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int i ,temp1 ,temp2;
		x.clear();
		y.clear();
		for(i=0;i<((4*n)-1);i++)
		{
			cin>>temp1>>temp2;
			x.push_back(temp1);
			y.push_back(temp2);
		}
		long long int a = (4*n)-1;
		sort(x.begin() , x.end());
		sort(y.begin() , y.end());
		long long int f ,g;
		for(i=0;i<a;i++)
		{
			if(x[i] == x[i+1])
			{
				i++;
			}
			else
			{
				f = x[i];
				break;
			}
		}
		for(i=0;i<a;i++)
		{
			if(y[i] == y[i+1])
			{
				i++;
			}
			else
			{
				g = y[i];
				break;
			}
		}
		cout<<f<<" "<<g<<endl;
		
	}
	
}
