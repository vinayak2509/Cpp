#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n;
	cin>>k;
	if(((n>>k)&1)==1){
		cout<<"bit is set";
	}else{
		cout<<"bit is not set";
	}
}