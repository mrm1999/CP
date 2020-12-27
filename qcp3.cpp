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
    long long int i ,ans, b ,n,x ,q;
    vector<long long int> a;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>b;
    	a.pb(b);
	}
	sort(a.begin(),a.end());
	
	for(i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			x=a[i];
			q=i;
			break;
		}
	}
	if(x>=2)
	
{
    ans = 0;
}
	else
	{
		
	
	for(i=q;i<n-1;i++)
	{
		if(a[i+1]-a[i]!=1)
		{
			ans = a[i]+1;
			break;
		}
	
	}
	if(x==1)
	{
		ans=0;
	}
}
	cout<<ans;

}
