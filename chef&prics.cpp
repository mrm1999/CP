#include <bits/stdc++.h>
using namespace std;
int main()
{
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int i,t , n ,k,temp;
	cin>>t;
	//vector <int> arr;
	while(t--)
	{
		//arr.clear();
		cin>>n>>k;
		int actual =0 ;
		int govt =0; 
		int loss =0;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			actual = actual + temp;
			if(temp > k)
			{
				temp = k;
			}
			govt = govt + temp;
		}
		loss = actual - govt;
		cout<<loss<<endl;
		
		
	}
}
