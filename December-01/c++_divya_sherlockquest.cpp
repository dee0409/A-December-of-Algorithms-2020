#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,su;
	cin>>n;
	if(n%3!=0)
	{
		cout<<"Not Safe";
		return 0;
	}
	int s,s1;
	s=(int)pow(n,2);
	s1=s;
	while(s1>0)
	{
		int r=s1%100;
		su += r;
		s1 = s1/100;
		
	}
	if(n%3==0 && su==n)
	cout<<"Safe";
	else
	cout<<"Not Safe";
	return 0;
}