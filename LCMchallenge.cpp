#include<iostream>
using namespace std;
int main()
{
    long long n ,m;
    while(cin>>n)
    {
        if(n==1)
            m=1;
        else if(n==2)
            m=2;
        else if(n==3)
            m=6;
        else if(n%2==0)
        {
            if(n%3==0)
                m=(n-1)*(n-2)*(n-3);
            else
                m=n*(n-1)*(n-3);
        }
        else
            m=n*(n-1)*(n-2);
        cout<<m<<endl;
    }
    return 0;
}
