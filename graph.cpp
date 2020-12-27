#include <bits/stdc++.h>
using namespace std;
int addedge(int u , int v , int w , int bi , map < int ,list <pair <int , int> > > &adj )
{
	adj[u].push_back(make_pair(v , w));
	if(bi==1)
	{
		adj[v].push_back(make_pair(u,w));
	}

}
void printgraph(map <int , list <pair <int , int> > > adj)
{
	for(auto x: adj)
	{
		cout<<x.first<<" : ";
		for(auto y : x.second)
		{
			cout<<"("<<y.first<<", "<<y.second<<")";
		}
		cout<<endl;
	}
}
void dijstra(map <int , list <pair <int , int> > > &adj , int src)
{
	vector <bool> visited;
	vector <int> distance;
	for(auto x:adj)
	{
		distance.push_back(INT_MAX-1);
	}
}
int main()
{
	map <int , list <pair <int , int> > > adj;
	addedge(0, 1 , 10 , 1 , adj);
	addedge(1, 2 , 5 , 1 , adj);
	addedge(0, 2 , 20 , 1 , adj);
	addedge(1, 3 , 16 , 1 , adj);
	addedge(2, 3 , 20 , 1 , adj);
	printgraph(adj);
	dijstra(adj , 0);
}
