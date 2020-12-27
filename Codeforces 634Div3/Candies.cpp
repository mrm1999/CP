#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long int t;
	cin>>t;
	long long int n,ans;
	while(t--)
	{
		 ans = 0;
		 cin>>n;
		 if(n==1){
		 	ans =0;
		 }
		 if(n%2==0)
		 {
		 	ans = (n/2)-1;
		 }
		 if(n%2==1)
		 {
		 	ans = n/2;
		 }
		 cout<<ans<<"\n";
		 
	}
}
