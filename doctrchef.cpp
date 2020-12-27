#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	long long int i,temp,n , x;
	vector <long long int> a;
	vector <long long int> g;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		a.clear();
		g.clear();
		for(i=0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);
			g.push_back(temp);
		}
		int cnt =0;
		int days = 1;
		sort(a.begin() , a.end());
		sort(g.begin() , g.end());
		if(x>=a[n-1])
		{
			days = n;
		}
		else 
		{
			int j=0;
			cout<<"DAYS"<<" "<<" A "<<"  "<<" J" <<"  "<<" X"<<"  "<<" Count"<<endl;
			while(a[j]>0)
			{
				cout<<days<<"      "<<a[j]<<"     "<<j<<"    "<<x<<"   "<<cnt<<endl;
				
				cnt++;
				if(a[j] - x <=0)
				{
					x = a[j];
					j++;
					if(j==n)
					{
						break;
					}
				//	a[j] = a[j] * pow(2 , cnt);
					
					
				}
				else
				{
					a[j] = a[j] - x;
					a[j] = 2*a[j];
				}
				if(a[j]>g[j])
				{
					a[j] = g[j];
				}
				x = 2*x;
				days++;
				
				
			}
		}
		cout<<days <<endl;
		
	}
}
