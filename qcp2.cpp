#include<bits/stdc++.h>
using namespace std;
 
#define rep(i,a,b) for(int i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#define ZERO(box) memset(box, 0, sizeof(box));
#define pb push_back
#define chkbit(s, b) (s & (1<<b))
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<ll> vi;
const int mod=1e9+7;
 
int main(){
	fast ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    long long int a , b ,c ,n,x ;
    cin>>a>>b>>c;
    x=(a+1)*(b+1);
    n = x/(c+1);
    cout<<(n-1);
    
    
}
