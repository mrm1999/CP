#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (int i = int(a); i <= int(b); ++i)
#define pb push_back
typedef long long ll;
typedef vector<ll> vi;
typedef vector<bool> vb;
const int mod = 1e9 + 7;
const string ln = "\n";

long long int mrm(vector<long long int> a, vector<long long int> b, int n) {
  long long int i, j, cost;
  vector<long long int> c;
  vector<long long int> actual;
  vector<long long int> l;
  vector<long long int> r;
  c.clear();
  actual.clear();
  for (i = 0; i < n; i++) {
    c.push_back(a[i]);
  }
  for (i = 0; i < n; i++) {
    c.push_back(b[i]);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  bool ans = true;
  for (i = 0; i < 2 * n; i++) {
    actual.push_back(c[i]);
    if (c[i] == c[i + 1]) {
      i++;
    } else {
      ans = false;
      break;
    }
  }
  if (!ans) {
    return -1;

  } else {
    l.clear();
    r.clear();
    cost = 0;
    i = 0;
    j = 0;
    //	cout<<"THE ORGINAL IS :-  ";
    //	print(actual);
    // For a vector
    while (i < n && j < n) {
      if (a[i] == actual[j]) {
        i++;
        j++;
      }
      if (a[i] > actual[j]) {
        j++;
      }
      if (a[i] < actual[j]) {
        l.push_back(a[i]);
        i++;
      }
    }
    while (i < n) {
      l.push_back(a[i]);
      i++;
    }
    // print(l);

    // FOR VECTOR B
    i = 0;
    j = 0;

    while (i < n && j < n) {
      if (b[i] == actual[j]) {
        i++;
        j++;
      }
      if (b[i] > actual[j]) {
        j++;
      }
      if (b[i] < actual[j]) {
        r.push_back(b[i]);
        i++;
      }
    }
    while (i < n) {
      r.push_back(b[i]);
      i++;
    }

    long long int m = l.size();
    long long int p = r.size();
    if (m != 0) {
      sort(l.begin(), l.end());
      sort(r.begin(), r.end(), greater<long long int>());
      //	cout<<"THE LEFT PART IS :   ";
      //	print(l);
      //	cout<<"THE RIGHT PART IS :   ";
      //	print(r);
      for (i = 0; i < m; i++) {
        cost = cost + min(l[i], r[i]);
      }
    } else {
      cost = 0;
    }
    return cost;
  }
}
long long int ayy(vector<long long int> a, vector<long long int> b, int n) {
  ll x;
  map<ll, ll> am, bm, cm;
  vi c;
  rep(i, 1, n) x =  a[i - 1] , am[x]++, cm[x]++;
  rep(i, 1, n) x = b[i - 1] , bm[x]++, cm[x]++;
	ll ans = 0;
  for (auto key : cm) {
    if (key.second & 1) {
      //   cout << -1 << ln;
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
int randomize()
{
	return (1+(rand()%10));
}
void print(vector <long long int> x , long long int y)
{
	for(long long int i=0;i<y;i++)
	{
		cout<<x[i]<<" ";
	}

}
int main() {
   srand(time(NULL)); 
  int i, n, x ,t;
  long long int mohit;
  long long int ayush;
  long long int harsh;
 cin>>t;
 //t=1;
  while (t--) {

    n = (rand() % 10) + 1;
    vector<long long int> a(n);
  vector<long long int> b(n);
  generate(a.begin(), a.end(), randomize); 
  generate(b.begin(), b.end(), randomize); 
  
    cout << "The value of n is " << n << endl;
    cout << "The value of Vector a is ";
	print(a , n);
/*    for (i = 0; i < n; i++) {
      x = (rand() % 10) + 1;
      a.push_back(x);
      cout << a[i] << " ";
    }*/
    cout << endl;
    cout << "The value of Vector b is ";
    /*for (i = 0; i < n; i++) {
      x = (rand() % 10) + 1;
      b.push_back(x);
      cout << b[i] << " ";
    }*/
    print(b , n);
    cout << endl;
    mohit = mrm(a, b, n);
    ayush = ayy(a, b, n);
    if (mohit != ayush) {
      cout << "Answer not matched" << endl;
      cout << "Mohit Answer   " << mohit << endl;
      cout << "Ayush Answer   " << ayush << endl;
      

    } else {
      cout << "Answer Matched" << endl;
      cout << "Cost is  " << mohit << endl;
    }
    cout<<t<<endl;
    cout<<endl;
    cout<<endl;
    
    
  }
}
