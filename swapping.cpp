#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the first number:";
	cin>>x;
	cout<<"Enter the second number:";
	cin>>y;
	cout<<"Before swapping\n";
	cout<<"The first number is:"<<x;
	cout<<"The second number is:"<<y;
	int temp=x;
	x=y;
	y=temp;
	cout<<"\nAfter swapping \n";
	cout<<"The first number is:"<<x;
	cout<<"The second number is:"<<y;
	return 0;
	
	
}
