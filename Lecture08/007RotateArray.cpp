#include<iostream>
#include<utility>

using namespace std;

int main(){
	int n;
	int arr[7]={10,20,30,40,50,60,70};
	n=sizeof(arr)/sizeof(int);

	for(int i=n-1;i>0;i--){
		
		swap(arr[i],arr[i-1]);

	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}