#include <iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<char> a;
    char b;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        a.push_back(b);
    }
    int q = 0;
    for(int i=0; i<(n-1);i=i+2)
    {
        if(a[i]==a[i+1])
        {
            q++;
        }
        else{
            q=q+2;
        }
    }
    cout<<q;

}
