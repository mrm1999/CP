#include <bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	long long int n;
	long long int max;
	while(test--)
	{
		max = 0;	
		cin>>n;
		max = n/2;
		if (max == 0)
		{
			max =1;
		}
		cout<<max<<"\n";
		if(n==1)
		{
		cout<<1<<" "<<1<<"\n";		
		}
		if(n==2)
		{
		cout<<2<<" "<<1<<" "<<2<<"\n";		
		}
		if(n==3)
		cout<<3<<" "<<1<<" "<<2<<" "<<3<<"\n";
		if(n>3 && n%2==0)
		{
			cout<<3<<" "<<1<<" "<<2<<" "<<3<<"\n";
			for(long int i = 2;i<max;i++)
			{
				cout<<2<<" "<<(2*i)<<" "<<((2*i)+1)<<"\n";
			}
			cout<<1<<" "<<2*max<<"\n";
		}
		if(n>3 && n%2==1)
		{
			cout<<3<<" "<<1<<" "<<2<<" "<<3<<"\n";
			for(long int i = 2;i<=max;i++)
			{
				cout<<2<<" "<<(2*i)<<" "<<((2*i)+1)<<"\n";
			}
			
		}
	}
	
	
	
}
