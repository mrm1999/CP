#include <bits/stdc++.h>
using namespace std;
class graph
{
    int V;
	vector<list <int> > adjlist;
	
    public:
	graph(int x)
	{
		int V = x;
        adjlist.resize(V+1);
	}
	
	void addedge(int u , int v )
	{
		adjlist[u].push_back(v);
	}
	void dfshelper(bool& visited[] ,int v)
	{
		visited[v] = true;
		cout<<v<<" ";
		for(auto i : adjlist[v])
		{
			if(!visited[i])
			{
				dfshelper(visited ,v);
			}
		}
	}
	void dfs(int start)
	{
		bool visited[V];
		for(int j =0 ;j<V;j++)
		{
			visited[j] = false;
		}
		dfshelper(visited , start);
	}
	
};
int main()
{
	int V;
	cout<<"Enter the number of Graph:- "<<endl;
	cin>>V;
	graph g(V);
	int m , u ,v;
	cout<<"Enter the number of edges :- "<<endl;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>u>>v;
		g.addedge(u,v);
	}
	int start;
	cout<<"Enter the starting element :-"<<endl;
	cin>>start;
	g.dfs(start);	
}
