#include<iostream>
using namespace std;

int main(){
	int n;
	int arr[5]={10,20,30,10,20};
	n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}