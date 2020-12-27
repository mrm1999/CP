#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ,m;
	cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
    	cin>>a[i];
	}
	int max=0;
	int min=0;
	sort(a , a+n);
	int temp = a[0];
	int c = 0;
	for(int i =0;i< n ; i++)
	{
		min = min + temp;
		temp--;
		if(temp==0)
		{
			c++;
			temp = a[c];
		}
		
	}
	sort(a , a+n , greater<int>());
	int g = 0;\
	for(int i =0;i<n;i++)
	{
		max = max + a[0];
		a[0]--;
		 for (int i = 1; i < m; ++i)
        {
            if (a[i] <= a[i-1])
            {
                break;
            }
            swap(a[i], a[i-1]);
    	}

	}
	cout<<max<<" "<<min;
	return 0;
}
