#include <bits/stdc++.h>
using namespace std;
void add_graph(vector<int> a[] , int k , int l)
{
	a[k].push_back(l);
	a[l].push_back(k);
	
}
void dfs(vector<int> a[] ,int n)
{
	int cnt =0;
	bool visited[n+1];
	for(int i =1;i<=n;i++)
	{
		visited[i] = false;	
	}
	for(int i=1;i<=n;i++)
	{
		if(visited[i] == false)
		{	
			cnt++;		
			stack <int> h;
			h.push(i);
			int x;
			while(!h.empty())
			{
				x = h.top();
				h.pop();
				if(!visited[x])
				{
					visited[x] = true;
				}
				vector<int>:: iterator p; 
			for(p = a[x].begin(); p!= a[x].end() ; ++p)
			{
				if(!visited[*p])
				{
					h.push(*p);
				}
			}
			}
		
		}
	}
	cout<<cnt<<endl;
	
}


int main()
{
	int  i,n , m ,k ,l;
	cin>>n>>m;
	vector<int> a[n+1];
	for(i=1;i<=m;i++)
	{
		cin>>k>>l;
		add_graph(a , k ,l );
	}

	dfs(a  , n );
}
