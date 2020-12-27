#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define f(i,a,b) for(int i=a;i<b;i++)
#define ip(a) ll a;cin>>a

int main(){
	ip(t);
	while(t--){
        int n;
		cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++) {
            int s;
            cin>>s;
            mp[s]++;
        }
        map<int,int> freq;
        auto it=mp.begin();
        for(;it!=mp.end();it++) {
           
            freq[it->second]++;
        }
        it=freq.begin();
        int max_freq = INT_MIN;
        int fre = INT_MIN;
        for(;it!=freq.end();it++) {
           
            if(it->second>max_freq) {
                max_freq = it->second;
                fre = it->first;
                //cout<<max_freq<<endl;
            }
        }
        cout<<fre<<endl;
	}
}
