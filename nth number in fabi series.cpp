#include<iostream>
using namespace std;
int f(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return(f(n-1)+f(n-2));
	}
}
int main()
{
	int n;
	cout<<"enter the number";
	cin>>n;
	cout<<f(n-1);
	return 0;
}
