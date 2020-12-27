#include <iostream>
#include<cmath>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
   int n , l;
   int a[1000];
   cin>>n>>l;
   for(int i =0;i<n;i++)
   {
    cin>>a[i];
    }
    sort(a,a+n);
    int b[100];
    for(int i=0;i<(n-1);i++)
    {
        b[i]=a[i+1]-a[i];
    }
    for(int i=0;i<(n-1);i++)
    {
       if(b[0]<b[i])
       {
           b[0]=b[i];

       }

    }
    int s = l-a[n-1];
    double p;
    p=(double) b[0]/2;
    p= fmax(p,s);
    p= fmax(p,a[0]);

    cout<<fixed;
    cout.precision(9);
    cout<<p;
}

