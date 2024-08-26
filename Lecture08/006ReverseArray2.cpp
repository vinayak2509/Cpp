#include<iostream>
#include<utility>
using namespace std;

int main(){
	int n,i,j;
	cin>>i>>j;
	int arr[7]={10,20,30,40,50,60,70};
	n=sizeof(arr)/sizeof(int);
	for(int l=0;l<j-i;i++){

		swap(arr[i],arr[j]);
		j--;

	}
	for(int m=0;m<n;m++){
		cout<<arr[m]<<endl;
	}

	return 0;
}