#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
	{
	cin>>arr[i];	
	 } 
	
    vector<int> fre(1e5+1,0);
    int cnt4 = 0,cnt6 = 0,cnt2 = 0,cnt8 = 0;
    for(int i=0;i<n;i++)
    {
        fre[arr[i]]++;
    }
    for(int i=0;i<1e5+1;i++)
    {
        if(fre[i]>=8)
        {
            cnt6++;
            cnt2++;
            cnt4++;
            cnt8++;
        }
        else if(fre[i]>=6)
        {
            cnt6++;
            cnt2++;
            cnt4++;
        }
        else if(fre[i]>=4)
        {
            cnt4++;
            cnt2++;
        }
        else if(fre[i]>=2)
        {
            cnt2++;
        }
    }
    int k;
    cin>>k;
    while(k--)
    {
        char ch;int b;
        cin>>ch>>b;
        if(ch == '+')
        {
            fre[b]++;
            if(fre[b] == 8)
                cnt8++;
            else if(fre[b] == 6)
                cnt6++;
            else if(fre[b] == 4)
                cnt4++;
            else if(fre[b] == 2)
                cnt2++;
        }
        else
        {
            fre[b]--;
            if(fre[b] == 7)
                cnt8--;
            if(fre[b] == 5)
                cnt6--;
            else if(fre[b] == 3)
                cnt4--;
            else if(fre[b] == 1)
                cnt2--;
        }
        if(cnt8 || (cnt4 && cnt2>2) || (cnt6 && cnt2>1) || (cnt4>=2))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
