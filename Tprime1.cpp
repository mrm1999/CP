#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    int *a;
    a=(int*)calloc(n,sizeof(int));
    int *b;
    b=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        cin>>*(a+i);
    }
    for(int i=0;i<n;i++)
    {
        *(b+i)==0;
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=(*(a+i));j++)
        {
            if(*(a+i)%j==0)
            {
                (*(b+i))++;
            }

        }
        k++;
    }
    for(int i=0;i<k;i++)
    {
        if((*(b+i))==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


}
