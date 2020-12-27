#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<long long int> vli;
#define f(i,a,b) for(int i=a;i<b;i++)
#define ip(a) ll a;cin>>a
#define op(a) cout<<a<<"\n"
ll mod=1e9+7;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
 	int t ,n, a,b,c,d,i,x,y,o,m;
 	cin>>t;
 	while(t--)
 	{
 		cin>>n>>a>>b>>c>>d;
 		x = a-b;
 		y=  b+ a;
 		m= c-d;
 		o = c+d;
 	
		 bool ans= false;
		 while(x<=y)
		 {
		 	if(x*n>=m && x*n<=o)
		 	{
		 		ans = true;
		 		break;
			 }
			 x++;
		 }
		 if(ans){
		 	cout<<"YES"<<endl;
		 }
		 else{
		 	cout<<"NO"<<endl;
		 }
	 }
 
	}
