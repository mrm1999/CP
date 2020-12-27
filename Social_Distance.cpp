#include <bits/stdc++.h>
using namespace std;
int main()
{
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	int n , k,i;
	string s;
	while(t--)
	{
		cin>>n>>k;
		cin>>s;
	    vector <int> q;
	    q.push_back(0);
	    int cnt =0;
		for(i=0;i<n;i++)
		{
			if(s[i] == '1')
			{
				q.push_back(i+1);
			}
			if(s[i] == '0')
			{
				cnt++;
			}
		}
		int cnt1 =0;
		if(cnt == n)
		{
			for(i=1;i<=n;i = i+k+1)
			{
				cnt1++;
			}
			cout<<cnt1<<endl;
		}
		else
		{
			int cnt1 =0;
			int m = q.size();
			for(i=0;i<m-1;i++)
			{
				if(q[i+1]-q[i] > (2* k)+1)
				{
					cnt1 = ((q[i+1] - q[i])/k+1) + cnt1;
				}
			}
			if(q[m-1]+k+1 <=n)
			{
				cnt1++;
			}
			cout<<cnt1<<endl;
		}
	}
}
