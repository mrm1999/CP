#include <bits/stdc++.h>
using namespace std;
struct item
{
	int value;
	int weight;
	
};
bool cmp(struct item a  , struct item b)
{
	double r1 = double(a.value)/(a.weight);
	double r2 = double(b.value)/(b.weight);
	return r1 > r2;
}
int main()
{
	int n , i , w;
	cin>>n>>w;
	item arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i].value>>arr[i].weight;
		
	}
	sort(arr , arr + n , cmp);
	/*for(i=0;i<n;i++)
	{
		cout<<arr[i].value<<"  "<<arr[i].weight<<endl;
	}*/
	int a = 0;
	double val = 0;
	/*while(w>0)
	{
		if(a<n)
		
		{
		
		if(w-arr[a].weight>=0)
		{
			val = val + arr[a].value;
			w = w - arr[a].weight;	
			a++;
		}
		else
		{
			val = val + arr[a].value * ((double) w / arr[a].weight);
			w=0;
			break;
		}
	}
		//cout<<val;
	}*/
	for(i=0;i<n;i++)
	{
		if(arr[i].weight+a <=w)
		{
			val = val + arr[i].value;
			a = a+ arr[i].weight;
		}
		else
		{
			val = val + arr[i].value * ((double) (w-a) / arr[i].weight);
			break;
		}
	}
	cout<<fixed<<setprecision(4)<<val;
	
}
