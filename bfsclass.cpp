#include <bits/stdc++.h>
using namespace std;
class graph
{
	public:
	graph(int x)
	{
		int V = x;
	}
	
	list <int> adjlist[V];
	void addedge(int u , int v )
	{
		adjlist[u].push_back(v);
	}
	void bfs(int start)
	{
		bool visited[V];
		for(int j =0 ; j<V;j++)
		{
			visited[j] = false;
		}
		queue <int> q;
		q.push(start);
		visited[start] = true;
		int x;
		while(!q.empty())
		{
			x = q.front();
			q.pop();
			cout<<x<<" ";
			for(auto i : adjlist[x])
			{
				if(visited[i] == false)
				{
					visited[i] = true;
					q.push(i);
				}
			}
		}
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
	for(auto i : m)
	{
		cin>>u>>v;
		g.addedge(u,v);
	}
	int start;
	cout<<"Enter the starting element :-"<<endl;
	cin>>start;
	g.bfs(start);
	
	
	
}
