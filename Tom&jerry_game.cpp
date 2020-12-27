#include <bits/stdc++.h>
using namespace std;
void solve(long long int t)
{
	long long int i , j ,ans;
	j = 0;
	if( t%2 == 1)
	{
		j = t/2;
	}
	else
	{
		while(t%2 ==0)
		{
			t = t/2;
			j++;
		}
		cout<<t<<" "<<j<<endl ;
		j = j+(t/2);
	}
	cout<<j<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int m;
	long long int t;
	cin>>m;
	while(m--)
	{
		cin>>t;
		solve(t);
	}

}
