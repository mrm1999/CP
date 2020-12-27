#include <bits/stdc++.h>
using namespace std;
int findbit(long long int n , long long int i)
{
	if((n & 1<<i) != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	string s1;
	cin>>s1;
	long long int n = s1.size();
	long long int range = (1<<n) - 1;
	string s = "";
	for(int num = 0;num<=range;num++)
	{
		s = "";
		for(int i=0;i<n;i++)
		{
			if(findbit(num , i) == 1)
			{
				s = s + s1[i];
			}
			
		}
		if(s.size() == 2)
		{
			cout<<s;
			cout<<endl;
		}
		
	}
}
