#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int cnt,temp , min , i,m,n,o,j,k;
	long long int x , y,z;
	int t;
	cin>>t;
	vector<long long int> a;
	vector<long long int> b;
	vector<long long int> c;
	
	while(t--)
	{
		min=0;
		a.clear();
		b.clear();
		c.clear();
				
		cin>>m>>n>>o;
		for(i=0;i<m;i++)
		{
			cin>>temp;
			a.push_back(temp);
		}
		for(i=0;i<n;i++)
		{
			cin>>temp;
			b.push_back(temp);
		}
		for(i=0;i<o;i++)
		{
			cin>>temp;
			c.push_back(temp);
		}
		sort(a.begin() , a.end());
		sort(b.begin() , b.end());
		sort(c.begin() , c.end());
		/*x  = pow(a[m-1]-b[n-1] , 2);
		y = pow(c[o-1]-b[n-1] , 2);
		z = pow(a[m-1]-c[o-1] , 2);*/
		x = (a[m-1]-b[n-1])*(a[m-1]-b[n-1]);
		y= (c[o-1]-b[n-1])*(c[o-1]-b[n-1]);
		z = (a[m-1]-c[o-1])*(a[m-1]-c[o-1]);
		min = x + y + z;
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				for(k=0;k<o;k++)
				{
					if((((a[i]-b[j])*(a[i]-b[j]))+((c[k]-b[j])*(c[k]-b[j]))+((a[i]-c[k])*(a[i]-c[k]))<min))
					{
						min = ((a[i]-b[j])*(a[i]-b[j]))+((c[k]-b[j])*(c[k]-b[j]))+((a[i]-c[k])*(a[i]-c[k]));
						
					}
				}
			}
		}
		cout<<min<<"\n";				
		}	
			
			

			
	}
			

