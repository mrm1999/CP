#include <bits/stdc++.h>
using namespace std;
void dijstra(map <int , vector <pair <int , int> > > adjlist ,int V , int src , map <string , int > k)
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
	/*
	for(int i=0;i<V;i++)
	{
		cout<<i<<" "<<distance[i]<<endl;
	}*/
	for(auto i : k)
	{
		cout<<i.first<<" "<<distance[i.second];
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
	int w ;
	string u , v;
	int a,b;
	map <string , int > k;
	int j = 0;
	map <int , vector<pair <int , int> > > adjlist;
	for(int i=0;i<m;i++)
	{
		cin>>u>>v>>w;
		if(k.find(u) == k.end())
		{
			k[u] = j;
			j++;
		}
		if(k.find(v) == k.end())
		{
			k[v] = j;
			j++;
		}
		a = k[u];
		b = k[v];
		adjlist[a].push_back(make_pair(b , w));
		adjlist[b].push_back(make_pair(a,w));
	}
	cout<<"Enter the source element:-"<<endl;
	string src;
	cin>>src;
	dijstra(adjlist , V , k[src] , k);
}
