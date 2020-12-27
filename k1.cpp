#include <bits/stdc++.h>
using namespace std;                       
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)



int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        vector<vector<int> > p(n+1, vector<int>(n+1, 1e9));
        p[0][0] = min(k, p[0][0]);
        vector<int> z(101, 0);
        z[arr[0]] = 1;
        for(int i=1; i<n; i++){
            vector<int> z1(101, 0);
            z1[arr[i]] = 1;
            p[i][i] = min(k, p[i][i]);
            p[0][i] = min(p[0][i], p[0][i-1]+p[i][i]);
            int x = k;
            for(int j=i-1; j>=0; j--){
                z1[arr[j]]++;
				if(z1[arr[j]] > 2){
                    x++;
                }
                else if(z1[arr[j]] == 2){
                    x += 2;
                }
                p[j][i] = min(x, p[j][i]);
                if(j > 0){
                    p[0][i] = min(p[0][i], p[0][j-1]+p[j][i]);
                }
            }
        }
        cout<<p[0][n-1]<<endl;
    
    }
    
    return 0;
}
