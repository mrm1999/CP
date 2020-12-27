#include <bits/stdc++.h>
using namespace std;
void dijstra(map <int , vector <pair <int , int> > > adjlist ,int V , int src)
{
	map <int , int> distance;
	for(auto i : adjlist)
	{
		distance[i.first] = INT_MAX;
	}
	// set is distance and destination element
	set<pair <int , int> > s;
	distance[src] = 0;
	s.insert(make_pair(0 , src));
	while(!s.empty())
	{
		auto p = *(s.begin());
		int node_name = p.second;
		int node_distance = p.first;
		s.erase(s.begin());
		for(auto i : adjlist[node_name])
		{
			if(node_distance + i.second < distance[i.first])
			{
				int dest = i.first;
				auto f = s.find(make_pair(distance[dest] , dest));
				if(f!=s.end())
				{
					s.erase(f);
				}
				
				distance[dest] = node_distance + i.second;
				s.insert(make_pair(distance[dest] , dest));
			}
		}
	}
	for(auto i : distance)
	{
		cout<<i.first<<" "<<i.second<<endl;
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
	map <int , vector<pair <int , int> > > adjlist;
	for(int i=0;i<m;i++)
	{
		cin>>u>>v>>w;
		adjlist[u].push_back(make_pair(v , w));
		adjlist[v].push_back(make_pair(u,w));
	}
	cout<<"Enter the source element:-"<<endl;
	int src;
	cin>>src;
	dijstra(adjlist , V , src);
	
}

/*
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
*/
