#include<iostream>
using namespace std;
int main()
{
	int n,r,s=0,temp;
	cout<<"enter the number";
	cin>>n;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	n=temp;
	if(s==n)
	{
		cout<<"it is a palindrom";
	}
	else
	{
		cout<<"it is not a palindrom";
	}
}
