#include <iostream>;
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n=0;
	int m=0;
	while(t--)
	{
		cin>>n>>m;
		char grid[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				grid[i][j]='B';
			}
		}
		grid[0][0] = 'W';
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<grid[i][j];
			}
			cout<<endl;
		}
		
	}
}
