#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;cin>>T;
    while(T--) {
        int N;cin>>N;
        string S;cin>>S;
        char min_ch=123,max_ch=96;
        for(int i=0;i<=(N-1)/2;i++) {
            min_ch = min(min_ch,S[i]);
            max_ch = max(max_ch,S[i]);
        }
        int cou[3]={0};
        for(int i=(N+1)/2;i<N;i++) {
            if(S[i]<min_ch) cou[0]++;
            else if(S[i]>max_ch) cou[1]++;
            else cou[2]++;
        }
        if(min_ch==max_ch) {
            sort(cou,cou+2);
            cout<<cou[1]+cou[2]<<endl;
        } else {
            cout<<cou[2]+max(cou[0],cou[1])<<endl;
        }
    }
}
