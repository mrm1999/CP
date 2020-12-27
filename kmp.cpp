#include <bits/stdc++.h>
using namespace std;
int value(char c)
{
	return (int) c -97;
}
char value1(int n)
{
	return char(n+97);
}
string solve(string s1 , string s2 , int n ,int m)
{
	int alpha[26];
	int i;
	for(i=0;i<26;i++)
	{
		alpha[i] = 0;
	}
	for(i=0;i<n;i++)
	{
		alpha[value(s1[i])]++;
	}
	for(i=0;i<m;i++)
	{
		alpha[value(s2[i])]--;
	}
	string s3 = "";
	string start ="";
	string end = "";
	string mid = "";
	int j;
	int k = value(s2[0]);
	for(i=0;i<k;i++)
	{
		if(alpha[i]>0)
		{
			for(j=0;j<alpha[i];j++)
			{
				start.push_back(value1(i));
			}
		}
	}
	for(i=k+1;i<26;i++)
	{
		if(alpha[i]>0)
		{
			for(j=0;j<alpha[i];j++)
			{
				end.push_back(value1(i));
			}
		}
	}
	char temp = value1(alpha[k]);
	bool first;
	i = 0;
	while(s2[0] == s2[i] && i<m)
	{
		i++;
	}
	
	if(k <= value(s2[i]))
	{
		first = true;
	}
	else
	{
		first = false;
	}
	if(first)
	{
		for(j=0;j<alpha[k];j++)
		{
			mid.push_back(value1(k));
		}
		mid = mid + s2;
	}
	else
	{
		mid = mid + s2;
		for(j=0;j<alpha[k];j++)
		{
			mid.push_back(value1(k));
		}
	}
	s3 = start + mid + end;
	return s3;
	
}
int main()
{
	int t;
	cin>>t;
	char c;
	string s1 , s2 , s3;
	int n , m;
	while(t--)
	{
		cin>>s1;
		cin>>s2;
		n = s1.size();
		m = s2.size();
		s3 = solve(s1 , s2 , n ,m);
		cout<<s3<<endl;
	}
}
