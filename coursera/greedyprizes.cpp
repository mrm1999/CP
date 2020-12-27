#include <bits/stdc++.h>
using namespace std;
long long int val(long long int x){
	long long int ans;
	ans = (x*(x+1))/2;
}
int main()
{
	long long int n,x,i,sum,c,root;
	cin>>n;
	vector <long long int> a;
	i=1;
	sum=0;
	x=n;
	root = -1 +pow(1+(8*n),0.5);
	//
	root = -1 + sqrt(1+(8*n));
	root = root/2;
	cout<<root<<endl;
	if(val(root-1)+root == n)
	{
		root = root;
		for(i=1;i<=root;i++)
			{
				cout<<i<<" ";
			}
	}
	else{
		root =root - 1;
		for(i=1;i<=root;i++)
			{
				cout<<i<<" ";
			}
		cout<<int(n-val(root));	
	}
	
}
