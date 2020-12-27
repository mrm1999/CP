#include <bits/stdc++.h>
using namespace std;
int factor(long long int t)
{
	int k=0;
	while(t%2==0)
	{
		t = t/2;
		k++;
	}
	return k;
}
long long int exponent(int x,int h)
{
	
	if(h==0)
	{
		return  1;
	}
	else if (h%2==0)
	{
		return exponent(x*x , h/2);	
	}	
	else
	{
		return x*exponent(x*x , (h-1)/2);
	}
}
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
		long long int x = t;
		int cnt =0;
		cnt = factor(t);
	//	cout<<cnt<<endl;
		long long int m = exponent(2 , cnt+1);
	//	cout<<m<<endl;
		j = x/m;
		
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
