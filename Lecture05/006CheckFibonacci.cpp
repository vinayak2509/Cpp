#include<iostream>
using namespace std;

int main(){
	int n,a=0,b=1,c=0,n2;
	cin>>n;
	n2=n;
	if(n==0 or n==1){
		cout<<"true"<<endl;
	}else{
		while(n>0){
			c=a+b;
			if(c==n2){
				cout<<"true"<<endl;
				break;
			}else if(c>n2){
				cout<<"false"<<endl;
				break;
			}
			a=b;
			b=c;
			n-=1;
		}
	}
	return 0;
}