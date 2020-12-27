#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<algorithm>


using namespace std;


int main()
{

    int n,i=0,j=0,a,b,ln,my=0,ck=0;
    cin>>n;
    int arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];

    }

    for(i=0; i<(n-1); i++){
        if(arr[i]!=arr[i+1])
            ck++;
    }
    cout<<ck<<endl;
}
