#include<iostream>
using namespace std;
int main(){
	int n,i,r,sum=0;
	cout<<"Enter the number:";
	cin>>n;
	int temp=n;
	while(n>0){
		i=n%10;
		n/=10;
		sum=sum+i*i*i;
	}
	if(sum==temp){
		cout<<"Armstrong number";
	}
	else{
		cout<<"Not Armstrong number";
	}
	return 0;
}
