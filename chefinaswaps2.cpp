#include <bits/stdc++.h>
using namespace std;
void print(vector <long long int> x)
{
	int m = x.size();
	for(int i=0;i<m;i++)
	{
		cout<<i<<"   "<<x[i]<<endl;
	}
}
void common(vector <long long int> x , vector <long long int> actual ,vector <long long int> &remain , long long int n )
{
	long long int i=0;
	long long int j=0;
	while(i<n && j<n)
	{
		if(x[i] == actual[j])
		{
			i++;
			j++;
		}
		if(x[i] > actual[j])
		{
			j++;
		}
		if(x[i] < actual[j])
		{
			remain.push_back(x[i]);
			i++;
		}
	}
	while(i<n)
	{
		remain.push_back(x[i]);
		i++;
	}
	
	
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	long long int n,i,temp,j,cost;
	vector <long long int> a;
	vector <long long int> b;
	vector <long long int> c;
	vector <long long int> actual;
	vector <long long int> remain;
	vector <long long int> l;
	vector <long long int> r;
	cin>>t;
	while(t--)
   {
		a.clear();
		b.clear();
		c.clear();
		actual.clear();
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);
			c.push_back(temp);
		}
		for(i=0;i<n;i++)
		{
			cin>>temp;
			b.push_back(temp);
			c.push_back(temp);
		}
		sort(a.begin() , a.end());
		sort(b.begin(),b.end());
		sort(c.begin(), c.end());
		bool ans = true;
		for(i=0;i<2*n;i++)
		{
			
			if(c[i]==c[i+1])
			{
				i++;
			}
			else
			{
				ans = false;
				break;
			}
		}
		if(!ans)
		{
			cout<<-1<<endl;
			
		}
		else
		{
			l.clear();
			r.clear();
			for(i=0;i<n;i++)
			{
				actual.push_back(c[2*i]);
			}
			common(a , actual ,remain,n);
			common(b , actual ,remain,n);
			if(remain.empty() ==true)
			{
				cost = 0;
			}
			else
			{
				int m = remain.size();
				for(i=0;i<(m/2);i++)
				{
					l.push_back(remain[i]);
				}
				for(i=m/2;i<m;i++)
				{
					r.push_back(remain[i]);
				}
				sort(l.begin() , l.end());
				sort(r.begin() , r.end());
				for(i=0;i<l.size();i++)
				{
					cost = cost + min(l[i] , r[i]);
				}
				cout<<cost<<endl;
			}
		}
			
			
	}
	
}
