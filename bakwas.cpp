#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &a){
    int n = a.size();
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void solve()
{
	int n;
	cin>>n;
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int temp = 0;
	vector <int> d;
	i=0;
	while(i<n)
	{
		if(a[i]==1)
		{
			i++;
			continue;
		}
		else
		{
			temp = i;
			while(a[i]!=1 && i+1<n)
			{
				i++;
			}
			d.push_back(i-temp);
		}
	}
	//print(d);
	int x = d.size();
	if(x==0)
	{
		cout<<"No"<<endl;
	}
	else if(x==1)
	{
		if(d[0]%2==1)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	else
	{
		sort(d.begin() , d.end());
		int k = d[x-1];
		int l = d[x-2];
		if(k%2==0)
		{
			cout<<"No"<<endl;
		}
		else
		{
			if(l<=k/2)
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}
	}
	
}
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		solve();
		
	}
}
