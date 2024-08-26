#include<iostream>
#include<limits.h>
using namespace std;

int main(){
	int n;
	int arr[6]={20,5,0,25,15,10};
	int lnum[3]={};
	n=sizeof(arr)/sizeof(int);
	for(int i=0;i<3;i++){
		int s=INT_MIN;
		int t=0;
		for(int j=0;j<n;j++)
			if(arr[j]>s){
				s=arr[j];
				t=j;
			}
		arr[t]=INT_MIN;
		lnum[i]=s;
	}

	int s=1;
	for(int i=0;i<3;i++){
		s*=lnum[i];
	}

	cout<<s;

	return 0;
}