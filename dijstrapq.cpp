#include <bits/stdc++.h>
using namespace std;
void dijstra(map <int , vector <pair <int , int> > > adjlist ,int V , int src)
{
	vector <int> distance(V , INT_MAX);
	priority_queue< pair<int , int> , vector <pair <int , int> > , greater <pair <int , int> > > pq;
	pq.push(make_pair(0 , src));
	distance[src]  = 0;
	while(!pq.empty())
	{
		int x = pq.top().second;
		pq.pop();
		for(auto i : adjlist[x])
		{
			int v = i.first;
			int w = i.second;
			if(distance[x] + w < distance[v])
			{
				distance[v] = w + distance[x];
				pq.push(make_pair(distance[v] , v));
			}
			
		}
	}
	for(int i=0;i<V;i++)
	{
		cout<<i<<" "<<distance[i]<<endl;
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
