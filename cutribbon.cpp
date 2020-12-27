#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    if(n==a+b+c)
    {
        cout<<3;
    }
    else if( n==a+b || n==b+c || n==a+c)
    {
        cout<<2;
    }
    else if(n != a && n != b && n != c)
    {
        cout<<0;
    }
    else
    {
        cout<<1;
    }
    return 0;
}
