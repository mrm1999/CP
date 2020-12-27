#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main()
{
    vector <int> a ;
    for(int i=1;i<=5;i++)
     {
    a.push_back(2*i);
    cout<<a[i];
    }
    cout<<endl;

    for( auto it = a.begin(); it != a.end(); ++it)
    {
        cout<<*it;
    }

}
