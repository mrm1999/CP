#include<bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)





int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<int> g, h;
        int ans = 0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                 if(g.size() == 0){
                    ans++;
                    a[i] = ans;
                    h.insert(ans);
                }
                else{
                    auto it = g.begin();
                    a[i] = *it;
                    g.erase(it);
                    h.insert(*it);
                }
            }
            else{
                if(h.size() == 0){
                    ans++;
                    a[i] = ans;
                    g.insert(ans);
                }
                else{
                    auto it = h.begin();
                    a[i] = *it;
                    h.erase(it);
                    g.insert(*it);
                }
                }
            }
        
        cout<<ans<<endl;
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

