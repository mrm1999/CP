#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,i;
	cin>>n;
	string s1;
	cin>>s1;
	string s2 = "";
	for( i=n/2;i<=n;i++)
	{
		s2 = s2 + s1[i];
	}
	
	
		int icnt=0;
		int dcnt=0;
		int scnt=0;
		for(i=0;i<n/2;i++)
		{
			if(s1[i] > s2[i])
			{
				icnt++;
			}
			if(s1[i]< s2[i])
			{
				dcnt++;
			}
			if(s1[i] == s2[i])
			{
				scnt++;
			}
		}
	//	cout<<icnt<<dcnt<<scnt<<endl;
		int ans;
		ans = max(icnt , max(dcnt , scnt));
		ans = n/2-ans;
		ans = 2*ans;
		cout<<ans<<endl;
	
	
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
