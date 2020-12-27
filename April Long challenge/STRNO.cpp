#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
using namespace std; 
  
const int MAX = 1000001; 
  
vector <int> factor ; 
  
void generatePrimeFactors() 
{ 
    factor.push_back(1); 
  
    for (int i = 2; i < MAX; i++) 
        factor.push_back(i); 
  
    for (int i = 4; i < MAX; i += 2) 
        factor.push_back(2); 
  
    for (int i = 3; i * i < MAX; i++) { 
        if (factor[i] == i) { 
            for (int j = i * i; j < MAX; j += i) { 
                if (factor[j] == j) 
                    factor[j] = i; 
            } 
        } 
    } 
} 
  
int calculateNoOFactors(int n) 
{ 
    if (n == 1) 
        return 1; 
  
    int ans = 1; 
  
    int dup = factor[n]; 
  
    int c = 1; 
  
    int j = n / factor[n]; 
  
    while (j != 1) { 
        if (factor[j] == dup) 
            c += 1; 
  
        else { 
            dup = factor[j]; 
            ans = ans * (c + 1); 
            c = 1; 
        } 
  
        
        j = j / factor[j]; 
    } 
  
     
    ans = ans * (c + 1); 
  
    return ans; 
} 

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	generatePrimeFactors();
	int test;
	cin>>test;
	
	int temp;
	long long int x , k;
	while(test--)
	{
		int ans=0;
		cin>>x>>k;
		if(k==1)
		{
			if(x>=2 ){
			ans = 1;
		}	
			else ans =0;
		
		}
		long long int cnt = 0;
		if(k>1)
		{
		cnt=calculateNoOFactors(x);
		if(cnt>k)
		{
			ans = 1;
		}
		}
		cout<<ans<<"\n";
	}
	
	
}

    
