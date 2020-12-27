
#include <bits/stdc++.h>
using namespace std;

void print(vector <long long int> x)
{
	int m = x.size();
	for(int i=0;i<m;i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void solve()
{
	long long int n,i,temp,j,cost;
	vector <long long int> a;
	vector <long long int> b;
	vector <long long int> c;
	vector <long long int> actual;
	vector <long long int> l;
	vector <long long int> r;
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
			actual.push_back(c[i]);
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
			cost = 0;
			i=0;
			j=0;
		//	cout<<"THE ORGINAL IS :-  ";
		//	print(actual);
		// For a vector
			while(i<n && j<n)
			{
				if(a[i] == actual[j])
					{
						i++;
						j++;
					}
				if(a[i] > actual[j])
					{
						j++;
					}
				if(a[i] < actual[j])
					{
						l.push_back(a[i]);
						i++;
					}
			}
			while(i<n)
			{
				l.push_back(a[i]);
				i++;
			}
			//print(l);
			
			// FOR VECTOR B
			i=0;
			j=0;
	
			while(i<n && j<n)
			{
				if(b[i] == actual[j])
					{
						i++;
						j++;
					}
				if(b[i] > actual[j])
					{
						j++;
					}
				if(b[i] < actual[j])
					{
						r.push_back(b[i]);
						i++;
					}
			}
			while(i<n)
			{
				r.push_back(b[i]);
				i++;
			}
			
			long long int m = l.size();
			long long int p = r.size();
			if(m!=0)
			{
			sort(l.begin() , l.end());
			sort(r.begin() , r.end() , greater<long long int>());
		//	cout<<"THE LEFT PART IS :   ";
		//	print(l);
		//	cout<<"THE RIGHT PART IS :   ";
		//	print(r);
			for(i=0;i<m;i++)
			{
				cost = cost + min(l[i] , r[i]);
			}
		}
		    else
		{
			cost = 0;
		}
			cout<<cost<<endl;
		}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
   {
		solve();
	}
	
}
