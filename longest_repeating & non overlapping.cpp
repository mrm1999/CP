#include <iostream>
using namespace std;
void solve(string s1)
{
    int n = s1.size();
    string s2 = s1;
    int i , j;
    int dp[n+1][n+1];
    for(i=0;i<=n;i++)
    {
        dp[i][0] = 0;
    }
    for(j=0;j<=n;j++)
    {
        dp[0][j] = 0;
    }
    int ma = -1;
    int k , l;
    for(i=0;i<=n;i++)
    {
    	for(j=0;j<=n;j++)
    	{
    		if(s1[i-1] == s2[j-1] && i!=j)
    		{
    			dp[i][j] = 1 + dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = 0;
			}
		}
		ma = max(dp[i][j] , ma);
		
		
	}
	

	cout<<ma<<" "<<k<<" "<<endl;
	string s3 = "";
	for(i=k;i>=0;i--)
	{
		if(ma>0)
		{
			s3 = s1[i] + s3;
			ma--; 
		}
	}
	cout<<s3;
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s1;
	    cin>>s1;
	    solve(s1);
	}
	return 0;
}
