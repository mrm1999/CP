#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int a[1000];

int main(void)
{
    int n, l;
    cin>>n>>l;

    for(int i= 0; i<n; i++){
        cin>>a[i];
    }

    double p= 0, q;
    sort(a, a+n);

    for(int i= 1; i<n; i++){
        q= abs(a[i]-a[i-1]);

        if(p < q) p= q;
    }

    p = (double)p/2;
    p= fmax(p, a[0]);
    p= fmax(p, abs(a[n-1] - l) );


    cout<<fixed;
    cout.precision(9);
    cout<< p <<endl;
    return 0;
}
