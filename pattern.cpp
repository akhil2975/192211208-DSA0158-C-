#include<iostream>
using namespace std;
int main(){
	int i,j,k,n;
	cout<<"Enter the no of row:";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=i;j<n;j++){
			cout<<" ";
			}
			for (int k = 1; k <= i; k++) {
            cout<<"*"<<" ";
        }
            cout<<"\n";
	}
	return 0;
	
}
