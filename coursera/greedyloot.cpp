#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ,w,i,q;
	cin>>n>>w;
	int v[n];
	int m[n];
	for(i=0;i<n;i++)
	{
		cin>>v[i]>>m[i];
	}
	
	double sum=0;
	while(w!=0)
	{
		double max=0;
		for(i=0;i<n;i++)
		{
			if((double)v[i]/m[i]>max)
			{
				max = v[i]/m[i];
				q=i;
			}
		}
		if(m[q]<=w)
		{
			w =w - m[q];
			sum = sum + v[q];
			v[q]=0;
		}
		else
		{
			
			sum = sum + (w*((double)v[q]/m[q]));
			w=0;
			
		}
	}
	cout<<setprecision(4)<<fixed<<sum;
}
