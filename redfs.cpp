#include <bits/stdc++.h>
using namespace std;

void dfshelper(map <int , vector <int> > adjlist , vector <bool> &visited , int v)
{
	visited[v] = true;
	cout<<v<<" ";
	for(auto i : adjlist[v])
	{
		if(!visited[i])
		{
			dfshelper(adjlist , visited , i);
		}
	}
}
void dfs(map <int , vector <int> > adjlist , int V , int start)
{
	vector <bool> visited(V , false);
	dfshelper(adjlist , visited , start);
}
int main()
{
	int V;
	cout<<"Enter the number of Graph:- "<<endl;
	cin>>V;
	map <int , vector <int> > adjlist;
	int m , u ,v;
	cout<<"Enter the number of edges :- "<<endl;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>u>>v;
		adjlist[u].push_back(v);
	}
	int start;
	cout<<"Enter the starting element :-"<<endl;
	cin>>start;
	dfs(adjlist , V, start);
}
