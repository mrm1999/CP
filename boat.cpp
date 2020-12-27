#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	int n;
	while(t--){
        int n;
        cin>>n;
        int ans = INT_MIN;
        map<int,int> l;
        map<int,int> h;
        int j;
        for(int i=0;i<n;i++) {
            cin>>j;
            l[j]++;
        }
        
        auto it = l.begin();
        for(;it!=l.end();it++) {
            h[it->first*2]+=it->second/2;
            if(it->second/2 > ans) {
                ans = it->second/2;
            }
        }
        it = l.begin();
        auto ite = l.end();
        ite--;
        for(;it!=ite;it++) {
            auto itr = ++it;
            it--;
            for(;itr!=l.end();itr++){
                h[it->first+itr->first]+=min(it->second,itr->second);
            }
        }
        it = h.begin();
        for(;it!=h.end();it++) {
            if(it->second > ans) ans = it->second;
        }
        cout<<ans<<endl;
	}
}
