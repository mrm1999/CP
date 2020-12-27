#include <bits/stdc++.h>
using namespace std;
int main()
{
	string temp = "push 5";
	cout<<temp[5]<<endl;
	cout<<isdigit(temp[5])<<endl;
	int r = int(temp[5]);
	cout<<r<<endl;
	cout<<typeid(r).name()<<endl;
}
