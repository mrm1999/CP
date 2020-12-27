#include <bits/stdc++.h>
using namespace std;
int func(stack <int> s)
{
	int t = INT_MIN;
	while(!s.empty())
	{
		if(t > s.top())
		{
			t = s.top();
			
		}
		s.pop();
	}
	return t;
	
}
void print(stack <int> s)
{
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}
int main()
{
	int t , i;
	cin>>t;
	string temp;
	vector <string> g;
	stack <int> s;
	char a;
	
	for(i=0;i<t;++i)
	{
		cin>>temp;
		g.push_back(temp);
	}
	string k;
	char l;
	char p; 
	for(i=0;i<t;i++)
	{
		k = g[i];
		p = k[1];
		
		if(p='u')
		{
			l = k[5];
			s.push(int(l)-48);
		}
		
		if(p == 'o')
		{
			s.pop();
		}
		if(p == 'a')
		{
			int maximum = func(s);
		}
	}
	print(s);
	
}
