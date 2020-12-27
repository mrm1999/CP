#include <bits/stdc++.h>
using namespace std;
void toputil(int v , stack <int> &s ,map <int , vector <int> > adjlist , vector <bool> &visited)
{
	visited[v] = true;
	for(auto t : adjlist[v])
	{
		if(!visited[t])
		{
			toputil(t , s , adjlist , visited);
		}
	}
	s.push(v);
}
void topologicalsorting(map <int , vector <int> > adjlist , int V)
{
	vector <bool> visited(V , false);
	stack <int> s;
	for(int i=0;i<V;i++)
	{
		if(!visited[i])
		{
			toputil(i , s , adjlist , visited);
		}
	}
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
		
	}
}
int main()
{
	int V;
	cout<<"Enter number of vertics : -"<<endl;
	cin>>V;
	int m ;
	cout<<"Enter number of Edges :- "<<endl;
	cin>>m;
	int u , v ,w ;
	map <int , vector <int> > adjlist;
	for(int i=0;i<m;i++)
	{
		cin>>u>>v;
		adjlist[u].push_back(v);
	}
	cout<<"Enter the source element:-"<<endl;
	topologicalsorting(adjlist , V);
}
