#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long long int n,j,i,temp,l;
    
    //vector <long long int> sign;
    //vector <long long int> pos;
	while(t--)
    {
    	cin>>n;
    	//a.clear();
    	//neg.clear();
    	long long int a[n] = {0};
		long long int sign[]={0};
		
    	for(i=0;i<n;i++)
    	{
    		cin>>a[i];
    	}
    	l=1;
    	sign[0]=0;
    	
    	for(i=0;i<n-1;i++)
    	{
    		if(a[i]*a[i+1]<0)
    		{
    			
				sign[l]=i;
				l++;
			}
		}
		long long int sum = 0;
		for(i=0;i<l;i++){
		sort(a+sign[i] , a+sign[i+1]);	
			
		sum = sum+ a[sign[i+1]];
			
			
		}
		cout<<sum<<endl;
	}
	}
