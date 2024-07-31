#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,r;
	cout<<"Enter the number:";
	cin>>n;
	if(n<0){
		cout<<"Invalid";
	}
	else{
		r=cbrt(n);
		cout<<"the cube root of " <<n <<" is " <<r;
	}
	return 0;
}
