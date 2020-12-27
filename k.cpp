#include <bits/stdc++.h>
using namespace std;
int value(char c)
{
	return (int) c -48;
}
int main()
{
	int t;
	cin>>t;
	char n;
	while(t--)
	{
		cin>>n;
		cout<<"The character is :  "<<value(n);
	}
}
