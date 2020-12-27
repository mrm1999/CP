#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n , t ,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
	
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a , a+n);
		int cons=0;
		int even =0;
		int odd = 0;
		//int evenc = 0;
		//int oddc =0;
		bool ans = false;
		
		for(i=0;i<n;i++)
		{
			if(a[i]%2==1)
			{
				odd++;
			}
			if(a[i]%2==0)
			{
				even++;
			}
		}
	//	cout<<odd<<" "<<even<<endl;
		if(odd%2==0&& even%2==0)
		{
			ans = true;
		}
		// bool possible=false;
        for(i=1;i<n;i++){
            if((a[i]%2==0 && a[i-1]%2!=0) || (a[i]%2!=0 && a[i-1]%2==0)){
                if(a[i]-a[i-1]==1){
                    ans=true;
                    break;
                }
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
	
		
}}
