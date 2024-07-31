#include<iostream>
using namespace std;
int main(){
	int n,f=1,i;
	cout<<"Enter the number:";
	cin>>n;
	if(n<0){
		cout<<"Invalid";
	}
	else{
		for(i=1;i<=n;i++){
		f=f*i;	
		}
		
		cout<<"Factorial of "<<n<<" is "<<f;
	}
	return 0;
}
