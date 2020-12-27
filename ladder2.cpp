#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

	int j,k;
	int i=0;
	int r[n];
	while(i<n)
	{
		int sum=0;
		cin>>j>>k;
		int h[j];
			for(int a=0;a<j;a++)
			{
				cin>>h[a];
			}

			for(int a=0;a<j;a++)
			{
				if(h[a]>h[a+1])
				{
					h[a]=h[a]+h[a+1];
					h[a+1]=h[a]-h[a+1];
					h[a]=h[a]-h[a+1];
				}
			}
			if(j>=k)
			{
			for(int b=0;h[j-k]=!0;b++)
			{
				for(int m=0;m<j;m++)
				{
					h[m]--;

				}
			sum++;
			}
			}
			if(j<k)
			{
				sum=0;
			}
			r[i]=sum;
		i++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<r[i]<<endl;
	}
}
