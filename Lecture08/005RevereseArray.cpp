#include<iostream>
#include<utility>
using namespace std;

int main(){
	int n;
	int arr[6]={70,60,50,40,30,20};
	n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n/2;i++){

		swap(arr[(n-1)-i],arr[i]);

	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}