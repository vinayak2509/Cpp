#include<iostream>
using namespace std;

int main(){
	int n,a=0,s=0,n2=0;
	cin>>n;
	while(n>0){
		a=n%10;
		n=n/10;
		n2=n2*10+a;
	}
	cout<<n2<<endl;
	return 0;
}