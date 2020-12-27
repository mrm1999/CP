#include<iostream>
#include<cmath>
using namespace std;
int main()
{
long long n;
long long k;
cin>>n>>k;
long long q=0;
long long b;
for(long long  i=1;i<=n;i++)
{


        b=k-i;
        if(b>0 && b<n)
        {
            q++;
        }



}
if(q%2==0)
{
    q=q/2;
}
if(q%2==1)
{
    q=(q+1)/2;
}
cout<<q;

}
