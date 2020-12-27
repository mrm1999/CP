#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	int n , i;
    vector <int> s;
    int temp;
	while(t--)
	{
		s.clear();
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			s.push_back(temp);
		}
		int cnt = 0;
		cnt = s[0] - 1;
		for(i=0;i<n-1;i++)
		{
			if(s[i+1]>s[i])
			{
				cnt = s[i+1] - s[i] - 1 + cnt;
			}
			else if(s[i+1]<s[i])
			{
				cnt = s[i] - s[i+1] - 1 + cnt;
			}
		}
		cout<<cnt<<endl;
	}
}
