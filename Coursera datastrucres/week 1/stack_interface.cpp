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
	int q , i;
	
	string temp;
	int r , maximum;
	stack <int> s;
	char a;
	cin>>q;
	for(i=0;i<q;i++)
	{
		cin>>temp;
		a = temp[5];
		cout<<a<<endl;
		if(temp[1] == 'u')
		{
			r = a - 48;
			s.push(r);
		}
		
		print(s);
		
		if(temp[1] == 'o')
		{
			s.pop();
		}
		if(temp[1] == 'a')
		{
			maximum = func(s);
			cout<<maximum<<endl;
		}
	}
	
}
