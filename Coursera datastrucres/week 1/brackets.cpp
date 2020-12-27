#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	
	string word;
	cin>>word;
	int x = word.size();
	int a = 0;
	bool ans = true;
	//stack <int> index;
	char l;
	int index = 0;
	stack <char> bracs;
	for(int i=0;i<x;i++)
	{
		 if(bracs.empty())
		 {
			a = index;}
			if(word[i] == '{' || word[i] == '(' || word[i] == '[')
			{
				bracs.push(word[i]);
			}
		
		else
		{
			l = bracs.top();
			
			if(word[i] == '}'&& l=='{' ||  word[i] == ')' && l=='(' || word[i] == ']' && l =='[')
			{
				bracs.pop();	
			}
			else
			{
				if(word[i] == '{' || word[i] == '(' || word[i] == '[')
				{
							bracs.push(word[i]);
				}
				if(word[i] == '}' || word[i] == ')' || word[i] == ']')
				{
					ans = false;
					break;
				}
				
			}
				
			}
			index++;
	}
	if(bracs.empty() && ans)
	{
		cout<<"Success"<<endl;
	}
	else
	{
		if(index>=x && !bracs.empty())
		{
			cout<<a+1<<endl;
		}
		else
		{
			cout<<index+1<<endl;
		}
	
 }
}

	

