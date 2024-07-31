#include<iostream>
using namespace std;
int main(){
	int arr[100],i,n,max;
	cout<<"Enter the no of elements:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	max=arr[0];
	for(i=1;i<n;i++){
	if(arr[i]>max){
		max=arr[i];
	}
}
	cout<<" The largest element is "<<max<<endl;
	return 0;
}
