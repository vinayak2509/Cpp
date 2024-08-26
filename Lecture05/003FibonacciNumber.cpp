#include<iostream>
using namespace std;

int main(){
	int n,a=0,b=1,c=0;
	cin>>n;
	if(n==1){
	c=n;
	}
	while(n-1>0){
		c=a+b;
		a=b;
		b=c;
		n-=1;
	}
	cout<<c;
	return 0;
}