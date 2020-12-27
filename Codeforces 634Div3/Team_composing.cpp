#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long int t;
	cin>>t;
	vector <long long int> a;
	vector <long long int> x;
	
	long long int n,temp,i,diff;
	while(t--)
	{
		a.clear();	
		cin>>n;
		int x[n]={1};
		for(i=0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);
		} 
		sort(a.begin() , a.end());
		x[0]=1;
		diff=1;
		int q=0;
		for(i=0;i<n-1;i++){
			if(a[i]!=a[i+1])
			{
				diff++;
			}
			if(a[i]==a[i+1]){
				x[q]++;
				
				if(a[i+1]!=a[i+2])
				{
					x[q+1]=1;
					q++;
					
				}
			}
		} 
		
	
		sort(x , x+q+1);
		if(diff<x[0])
		{
			cout<<diff<<"\n";
		}
		if(diff>x[0])
		{
			cout<<x[0];
		}
		if(diff==x[0]){
			cout<<diff-1;
		}
	}
}
