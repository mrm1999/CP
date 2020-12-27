#include <bits/stdc++.h>
using namespace std;
int n;
bool valid(int i , int j , int n)
{
	if(i>=0 && i<n && j>=0 && j<n)
	{
		return true;
	}
	return false;
}
void intialise(int &l ,int &m ,int &k , int i ,int j , int val)
{
	l=i;
	m=j;
	k = val;
}
int count(vector < vector <char> > mat, int i ,int j , string pattern , int n , int b)
{
	int c = 0;

	int l,m,k;
	//right
	intialise(l,m,k,i,j,0);
	while(valid(l,m,n))
	{
		if(mat[l][m] == pattern[k] )
		{
			m++;
			k++;
		}
	}
	if(k==b)
	{
		c++;
	}
	//left
	intialise(l,m,k,i,j,0);
	while(valid(l,m,n))
	{
		if(mat[l][m] == pattern[k] )
		{
			m--;
			k++;
		}
	}
	if(k==b)
	{
		c++;
	}
	//up
	intialise(l,m,k,i,j,0);
	while(valid(l,m,n))
	{
		if(mat[l][m] == pattern[k] )
		{
			l--;
			k++;
		}
	}
	if(k==b)
	{
		c++;
	}
	//down
	intialise(l,m,k,i,j,0);
	while(valid(l,m,n))
	{
		if(mat[l][m] == pattern[k] )
		{
			l++;
			k++;
		}
	}
	if(k==b)
	{
		c++;
	}
	// right_up
	intialise(l,m,k,i,j,0);
	while(valid(l,m,n))
	{
		if(mat[l][m] == pattern[k] )
		{
			l--;
			m++;
			k++;
		}
	}
	if(k==b)
	{
		c++;
	}
	// left_up
	intialise(l,m,k,i,j,0);
	while(valid(l,m,n))
	{
		if(mat[l][m] == pattern[k] )
		{
			l--;
			m--;
			k++;
		}
	}
	if(k==b)
	{
		c++;
	}
	//right_down
	intialise(l,m,k,i,j,0);
	while(valid(l,m,n))
	{
		if(mat[l][m] == pattern[k] )
		{
			l++;
			m++;
			k++;
		}
	}
	if(k==b)
	{
		c++;
	}
	//left_down
	intialise(l,m,k,i,j,0);
	while(valid(l,m,n))
	{
		if(mat[l][m] == pattern[k] )
		{
			l++;
			m--;
			k++;
		}
	}
	if(k==b)
	{
		c++;
	}
	return c;
	
}
int main()
{
	int n;
	cin>>n;
	int i,j;
	vector <vector <char> > mat(n , vector <char> (n));
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>mat[i][j];
		}
	}
	string pattern ;
	cin>>pattern;
	int b= pattern.size();
	int cnt = 0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cnt = count(mat , i ,j,pattern ,n,b)+cnt;
	}
	cout<<cnt<<endl;
}
