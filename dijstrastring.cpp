#include <bits/stdc++.h>
using namespace std;
void shortest(map <string , vector < pair <string , int> > > adjlist , int V , string s1)
{
	map <string , int> distance;
	for(auto j: adjlist)
	{
		distance[j] = INT_MAX;
	}
	priority_queue<pair<int , string> , vector <pair <int , string> > , greater <pair <int , string> > > pq;
	pq.push(make_pair(0 , s1));
	distance[s1] = 0;
	string s;
	while(!pq.empty())
	{
		s = pq.top().second;
		pq.pop();
		for(auto i : adjlist[s])
		{
			if(distance[s] + i.second < distance[i.first])
			{
				distance[i.first] = distance[s] + i.second;
				pq.push(make_pair(distance[i.first] , i.first));
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
	cout<<"Enter Number of Cities :- "<<endl;
	cin>>V;
	int m;
	cout<<"Enter the number of roads :- "<<endl;
	cin>>m;
	map <string , vector < pair <string , int> > > adjlist;
	string s1 , s2;
	int d;
	for(int i=0;i<V;i++)
	{
		cin>>s1>>s2>>d;
		adjlist[s1].push_back(make_pair(s2 , d));
		adjlist[s2].push_back(make_pair(s1 , d));
	}
	cout<<"Enter the source string:- "<<endl;
	cin>>s1;
	shortest(adjlist , V , s1);
	
	
}
