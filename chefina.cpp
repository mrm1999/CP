#include <bits/stdc++.h>
using namespace std;
void printarr(long long int h[] , long long int g)
{
	long long int i=0;
	for(i=0;i<g;i++)
	{
		cout<<h[i]<<" ";
	}
	cout<<endl;
}
void print(vector <long long int> x)
{
	int i;
	for(i=0;i<x.size();i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
void solve(long long int a[] , long long int b[] , long long int actual[] , long long int n)
{
		vector <long long int> l;
		vector <long long int> r;
		l.clear();
		r.clear();
		long long int cost = 0;


		long long int i=0;
		long long int j=0;
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
			cout<<"THE LEFT PART IS :-  ";
			print(l);
			cout<<"THE RIGHT PART IS :-  ";	
			print(r);
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
int main()
{
	int t;
	long long int n , temp , i ,j ,k;
	long long int a[n] ;
	long long int b[n]; 
	long long int c[2*n] ;
	long long int actual[n];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(i=0;i<n;i++)
		{
			c[i]= a[i];
		}
		for(i=n;i<(2*n);i++)
		{
			c[i] = b[i-n];
		}
		int m = 2*n;
		sort(a , a+n);
		sort(b , b+n);
		sort(c , c+m);
		bool ans = true;
		for(i=0;i<m;i++)
		{
			if(c[i] == c[i+1])
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
			for(i=0;i<n;i++)
			{
				actual[i] = c[2*i];
			}
			cout<<"THE ORIGINAL ARRAY IS :-  ";
			printarr(actual , n);
			solve(a , b , actual , n);
		
			
			
			
		}
	}
}
