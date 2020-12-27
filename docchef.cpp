#include <bits/stdc++.h>
using namespace std;
int case1 (vector <long long int> a ,long long int  x ,int  l ,int r  )
{
	return r-l+1;
}
int case2 (vector <long long int> a , vector <long long int> g ,long long int  x ,int  l ,int r  )
{
	int days = 1;
	int j = l;
	while(a[j] > 0)
	{
		if(a[j] - x <=0)
			{
			//	x = a[j];
		    	j++;
		    	if(j==r+1)
		    	{
		    		break;
				}
					
			}
		else
			{
				a[j] = a[j] - x;
				a[j] = 2*a[j];
			}
			if(a[j] > g[j])
			{
				a[j] = g[j];
			}
		
			x = 2*x;
			days++;
			
	
	}
	return days;
}

int main()
{
	int t;
	long long int i,temp,n , x;
	vector <long long int> a;
	vector <long long int> g;
	cin>>t;
	while(t--)
	{
		ios_base::sync_with_stdio(false);
    cin.tie(NULL);
		cin>>n>>x;
		a.clear();
		g.clear();
		for(i=0;i<n;i++)
		{
			cin>>temp;
			a.push_back(temp);
			g.push_back(temp);
		}
	
		int days = 1;
		sort(a.begin() , a.end());
		sort(g.begin() , g.end());
		if(x>=a[n-1])
		{
			days = case1(a , x, 0 , n-1);
		}
		else if(x <= a[0])
		{
			days = case2(a ,g, x , 0 ,n-1);
		}
		else
		{
			int k ;
			for(i=0;i<n;i++)
			{
				if(a[i]>x)
				{
					k = i;
					break;
				}
			}
			days = case1(a , x ,0 ,k-1) + case2(a ,g, x , k ,n-1);
		}
		cout<<days<<endl;
		
	}
}
