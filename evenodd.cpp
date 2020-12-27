#include <iostream>
using namespace std;
int main()
{
int t;
int a=0;
while(a<t)
{
    a++;
    int w;
    cin>>w;
    int r,s;
    r=0;
    s=0;
    int x;
    for(int i=0; (w-2*i)>=0;i++)
    {
        for(int j=0;x>=0;j++)
        {
            x=w-2*i-j;
            r++;
        }
    }
    for(int i=0; (w-i)>=0;i++)
    {
        for(int j=0;x>=0;j++)
        {
            x=w-i-j;
            s++;
        }
    }
    cout<<r+s;
}

}
