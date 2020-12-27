#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = int(a); i <= int(b); ++i)
#define pb push_back
typedef long long ll;
typedef vector<ll> vi;
typedef vector<bool> vb;
const int mod = 1e9 + 7;
const string ln = "\n";

long long int mrm(vector <long long int> a,vector <long long int> b,int n)
{
		long long int i,j,cost;
		vector <long long int> c;
		vector <long long int> actual;
		vector <long long int> l;
		vector <long long int> r;
		c.clear();
		actual.clear();
		cin>>n;
		for(i=0;i<n;i++)
		{
				c.push_back(a[i]);
		}
		for(i=0;i<n;i++)
		{
			c.push_back(b[i]);
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
			cost = -1;
			
		}
		else
		{
			l.clear();
			r.clear();
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
			return cost;
		}
}
long long int ayy(vector <long long int> a,vector <long long int> b,int n)
{
	vi  c;
  	map<ll, ll> am, bm, cm;
	ll ans = 0;
	long long int x;
  rep(i, 1, n)  am[a[i - 1]]++, cm[a[i - 1]]++;
  rep(i, 1, n)  bm[b[i - 1]]++, cm[b[i - 1]]++;

  for (auto key : cm) {
    if (key.second & 1) {
     
      ans = -1;
    }
    x = abs(am[key.first] - key.second / 2);
    rep(i, 0, x - 1) { c.pb(key.first); }
  }
  sort(c.begin(), c.end());
  
  x = c.size();
  rep(i, 1, x / 2) { ans += c[i - 1]; }
  return ans;
}
int main()
{
	
	vector <long long int> a;
	vector <long long int> b;
	int i,n , x;
	long long int mohit;
	long long int ayush;
	long long int harsh;
	while(true)
	{
		a.clear();
		b.clear();
	
		n = (rand()%10) + 1;
		cout<<"The value of n is "<<n<<endl;
		cout<<"The value of Vector a is ";
		for(i=0;i<n;i++)
			{
			x = (rand()%10) + 1;
			a.push_back(x);	
			cout<<a[i]<<" ";
			}
			cout<<endl;
		cout<<"The value of Vector b is ";	
		for(i=0;i<n;i++)
			{
			x = (rand()%10) + 1;
			b.push_back(x);	
			cout<<b[i]<<" ";
			}
			cout<<endl;
		
		mohit = mrm(a , b, n);
		cout<<"Mohit Answer   "<<mohit<<endl;
		ayush = ayy(a , b , n);
		
			cout<<"Ayush Answer   "<<ayush<<endl;
		if(mohit != ayush)
		{
			cout<<"Answer not matched"<<endl;
			
			break;
				
		}
		else
		{
			cout<<"Answer Matched"<<endl;
			cout<<"Cost is  "<<mohit<<endl;
			}	
	}
}
