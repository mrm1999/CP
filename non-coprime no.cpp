#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
int n;
cin>>n;
if(n>=1 && n<=45000)
{
int *a;
a = (int*)calloc(n,sizeof (int));
int *b;
b = (int*)calloc(n,sizeof (int));
for(int i=1;i<=n;i++)
{
    a[i-1]=2*i;
    b[i-1]=2*i-1;
}
if(n==1 || n==2)
{
    cout<<"No"<<endl;
}
else if (n > 2)
{
    cout<<"Yes"<<endl;
}
if(n != 1 && n != 2)
{
if(n%2==1)
{
    cout<< (n-1)/2<<" ";
    for(int i=0;i<(n-1)/2;i++)
    {cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<< (n+1)/2<<" ";
    for(int i=0;i<(n+1)/2;i++)
    {cout<<b[i]<<" ";
    }
}
if(n%2==0)
{
    cout<< n/2<<" ";
    for(int i=0;i<n/2;i++)
    {cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<< n/2<<" ";
    for(int i=0;i<n/2;i++)
    {cout<<b[i]<<" ";
    }
}
}
}
}
