#include<iostream>
using namespace std;
int happynum(int n){
	int sum=0,rem=0;
	while(n>0){
		rem=n%10;
		sum=sum+(rem*rem);
		n=n/10;
	}
	return sum;
}
int main(){
	int n,result;
	cout<<"Enter the number:";
	cin>>n;
	result=n;
	while(result!=1 && result!=4){
		result=happynum(result);
	}
	if(result==1){
	cout<<"Happy number";
    }
	else if(result==4){
	cout<<"not happy number";
}
	return 0;
}
