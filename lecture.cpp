#include <iostream>
#include<string>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string> d;
    string a,b;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        if(b.length() < a.length())
        {
            d[a]=b;
        }
        else
            d[a]=a;

    }
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cout<<d[a]<<" ";

    }
    cout<<"\n";
}
