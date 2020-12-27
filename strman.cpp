#include <bits/stdc++.h>
using namespace std;
int value(char c)
{
	return (int) c - 97;
}
int main()
{
	int n;
	string s1;
	string s2;
	int alpha1[26];
	int alpha2[26];
	cin>>n;
	cin>>s1;
	cin>>s2;
	int i;
	for(i=0;i<26;i++)
	{
		alpha1[i] = 0;
		alpha2[i] = 0;
	}
	for(i=0;i<n;i++)
	{
		alpha1[value(s1[i])]++;
		alpha2[value(s2[i])]++;
	}
	bool ans = true;
	for(i=0;i<26;i++)
	{
		if(alpha1[i]!=alpha2[i])
		{
			ans = false;
			break;
		}
	}
	if(ans)
	{
		cout<<"Happy"<<endl;
	}
	else
	{
		cout<<"Sad"<<endl;
	}
	
}
