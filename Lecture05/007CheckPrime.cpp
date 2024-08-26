#include<iostream>
using namespace std;

int main(){
	int n,i=2,a=0;
	cin>>n;
	while(i<=n-1){
		if(n%i==0){
			cout<<"not prime";
			break;
		}else{
			a=1;
		}
		i+=1;
	}
	if(a==1){
		cout<<"Prime";
	}
	return 0;
}