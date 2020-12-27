#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[1000],b[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                b[k]++;
            }

        }
        k++;
    }
    for(int i=0;i<k;i++)
    {
        if(b[i]==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


}
