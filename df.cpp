#include <bits/stdc++.h>
using namespace std;
void dfshelper(map <int, vector <int> > adjlist , int starting , vector <bool> &visited)
{
	visited[starting] = true;
	cout<<starting<<" ";
	for(auto i : adjlist[starting])
	{
		if(!visited[i])
		{
			dfshelper(adjlist , i , visited);
		}
	}
}

void dfs(int V , map < int , vector <int> > adjlist , int starting )
{
	vector <bool>  visited(V);
	for(int i=0;i<V;i++)
	{
		visited[i] = false;
	}
	dfshelper(adjlist , starting , visited);
}

int main()
{
	int V;
	cout<<"Enter number of nodes:- ";
	cin>>V;
	int m , u , v;
	cout<<"Enter number of edges:- ";
	cin>>m;
	map < int , vector <int> > adjlist;
	for(int i=0;i<V;i++)
	{
		cin>>u>>v;
		adjlist[u].push_back(v);
	}
	int starting;
	cin>>starting;
	dfs(V , adjlist , starting);
	
	
	
}
