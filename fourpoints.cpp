#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int t;
cin>>t;
int a=0;
int x[4], y[4];
float s,u,v,z;
while(a<t)
{
for(int i=0;i<4;i++)
{
    cin>>x[i]>>y[i];
}
s=pow((x[2]-x[0]) ,2 )+pow((y[2]-y[0]) , 2);
u=pow((x[3]-x[1]) ,2 )+pow((y[3]-y[1]) , 2);
v=pow(s , 0.5);
z=pow(u , 0.5);
if (v=z)
    cout<<"YES";
else
cout<<"NO";
a++;
    }

}

