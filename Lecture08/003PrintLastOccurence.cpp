#include<iostream>
using namespace std;

int main(){
	int n,t,c=0;
	cin>>n>>t;
	int arr[n]={10,20,30,10,20};
	for(int i=n-1;i>=0;i--){
		if(arr[i]==t){
			c=i;
			break;
		}else{
			c=-1;
		}	
	}
	cout<<c<<endl;

	return 0;
}