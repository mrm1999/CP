#include <bits/stdc++.h>
using namespace std;
void dfs(map <int , vector<int> > adjlist , int V , int start)
{
	vector <bool> visited(V , false);
	stack <int> p;
	p.push(start);
	int x;
	while(!p.empty())
	{
		x = p.top();
		p.pop();
		if(!visited[x])
		{
			cout<<x<<" ";
			visited[x] = true;
		}
		for(auto i : adjlist[x])
		{
			if(!visited[i])
			{
				p.push(i);
			}
		}
		
	}
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
