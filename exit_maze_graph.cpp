#include <bits/stdc++.h>
using namespace std;
void add_graph(vector<int> a[] , int k , int l)
{
	a[k].push_back(l);
	a[l].push_back(k);
	
}
void dfs(vector<int> a[] , int u ,int v ,int n)
{
	bool visited[n];
	for(int i =0;i<n;i++)
	{
		visited[i] = false;	
	}
	stack <int> h;
	h.push(u);
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
		for(p = a[u].begin(); p!= a[u].end() ; ++p)
		{
			if(!visited[*p])
			{
				h.push(*p);
			}
		}
	}
	if(visited[u] && visited[v])
	{
		cout<<1;
	}
	else
	{
		cout<<0;
	}
}


int main()
{
	int  i,n , m ,u ,v ,k ,l;
	cin>>n>>m;
	vector<int> a[n];
	for(i=1;i<=m;i++)
	{
		cin>>k>>l;
		add_graph(a , k-1 ,l-1 );
	}
	cin>>u>>v;
	dfs(a , u-1 , v-1 , n );
}
