#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s,p;
    cin>>s>>p;
    unordered_map<char,int> mpk;
    for(auto &c:s) mpk[c]++;
    for(auto &c:p) mpk[c]--;
    string fs;
    for(auto &c:mpk){
        for(int i=0;i<c.second;i++){
            fs += c.first;
        }
    }
    sort(fs.begin(), fs.end());
    int i = 0;
    string ans;
    bool front = 0;
    for(int i=0;i<p.length()-1;i++){
        if(p[i+1]<p[i]) {
            front = 1;
            break;
        }
    }
    if(front){
        while(fs[i]<p[0] && i<fs.length()){
            ans+= fs[i];
            i++;
        }
        
    } else {
        while(fs[i]<=p[0] && i<fs.length()){
            ans+= fs[i];
            i++;
        }
    }
    ans += p;
        while(i<fs.length()){
            ans += fs[i];
            i++;
        }
    cout<<ans<<"\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
