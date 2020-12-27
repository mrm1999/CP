#include <bits/stdc++.h>
using namespace std;
int value(char c){
	return (int) c - 97; 
}
int main()
{
	string s;
	cin>>s;
	int n = s.size();
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		a[i] = value(s[i]);
	}
	int ans = 0;
	int temp = a[0];
	int increasing = 0;
	bool brk = true;
	for(i=1;i<n;i++)
	{
		if(a[i] >= temp)
		{
			temp = a[i];
			brk = false;
		}
		else 
		{
			if(brk == false)
			{
				increasing++;
				brk = true;
			}
			temp = a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<increasing<<endl;
	int temp1 = a[0];
	int decreasing = 0;
	bool brk1 = true;
	for(i=1;i<n;i++)
	{
		if(a[i] <= temp1)
		{
			temp = a[i];
			brk1 = false;
		}
		else 
		{
			if(brk1 == false)
			{
				decreasing++;
				brk1 = true;
			}
			temp1 = a[i];
				
	}
	}
	cout<<decreasing<<endl;
	cout<<increasing + decreasing <<endl;

}
