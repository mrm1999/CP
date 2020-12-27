#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector <float> a;
	float t,temp,c1,c2,c3;
	for(int i =0;i<4;i++)
	{
		cin>>temp;
		a.push_back(temp);
	}
	cin>>t;
	sort(a.begin(),a.end());
	bool ans=false;
	bool case1 = true;
	bool case2 = true;
	bool case3 = false;
	c1 = (a[0]+a[1]+a[2])/3;
	if(c1<=t)
	{
		case1 = false;
	}
	c2=(a[1]+a[2]+a[3])/3;
	if(c2<=t)
	{
		case2 = false;
	}
	c3=((3*t)-a[1]-a[2]);
	if(c3>=a[0] && c3<=a[3])
	{
		case3 = true;
	}
	if((case1==true&&case3==false) || (case2==true&&case3==false) )
	{
		cout<<"impossible";
	}
	else if(case3==true)
	{
		cout<<c3;
	}
	else
	cout<<"infinte";
}
	
	
	
	
	
	

