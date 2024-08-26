#include<iostream>
using namespace std;

int main(){
	int n;
	int arr[6]={20,5,0,25,15,10};
	int lnum[3]={};
	n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++)
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
	}

	for(int i=0;i<3;i++){
		lnum[i]=arr[n-i-1];
	}

	for(int i=0;i<3;i++){
		cout<<lnum[i]<<endl;
	}

	return 0;
}