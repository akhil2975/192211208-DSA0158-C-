#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float n1,n2;
	cout<<"Enter two numbers:";
	cin>>n1>>n2;
	cout<<"Addition:"<<n1+n2<<endl;
	cout<<"Subtraction:"<<n1-n2<<endl;
	cout<<"Multiplication:"<<n1*n2<<endl;
	float modulo= fmod(n1,n2);
	if(n2!=0){
		cout<<"Division:"<<n1/n2<<endl;
		cout<<"Modulo:"<<modulo<<endl;
	
	}
	else{
		cout<<"division  is undefined:";
	}
	
	return 0;
}
