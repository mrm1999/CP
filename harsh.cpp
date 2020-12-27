#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<long long int> vli;
#define f(i,a,b) for(int i=a;i<b;i++)
#define ip(a) ll a;cin>>a
#define op(a) cout<<a<<"\n"

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	ip(t);
	while(t--){
        ll N,temp;
        cin>>N;
        map<ll,ll> mapx,mapy,mapz,mapD;
        f(i,0,N) {
            cin>>temp;
            mapx[temp]++;
            mapz[temp]++;
        }
        f(i,0,N) {
            cin>>temp;
            mapy[temp]++;
            mapz[temp]++;
        }
        bool ans = true;
        auto it = mapz.begin();
        ll sum = 0;
        for(;it!=mapz.end();it++){
            if(it->second & 1) {
                ans = false;
                cout<<-1<<endl;
                break;
            } else {
                ll cnter = abs(mapx[it->first]-mapy[it->first]);
                if(cnter>0){
                    mapD.insert({it->first,cnter/2});
                    sum+=(cnter/2);
                }
            }
        }
        if(!ans) continue;
        else {
            ll count = 0;
            sum = sum/2;
            auto it = mapz.begin();
            ll str = it->first;
            auto itr = mapD.begin();
            while(sum){
                if(itr->second==0) itr++;
                if(2*str<=itr->first){
                    count += 2*str*sum;
                    break;
                } else {
                    count += itr->first;
                    itr->second--;
                    sum--;
                }
            }
            cout<<count<<endl;
        }
	}
}
