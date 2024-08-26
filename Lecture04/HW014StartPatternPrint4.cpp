#include<iostream>
using namespace std;

int main(){
	int n,i=1,c,d;
	cin>>n;
	c=n*2;
	d=n;
	while(i<=d){
		int j=1;
		int k=2;
		int m=1;
		while(j<=n){
			cout<<"*";
			j+=1;
		}

		while(k<=i){
			cout<<"  ";
			k+=1;
		}
		while(m<=n){
			cout<<"*";
			m+=1;
		}
		cout<<endl;
		i+=1;
		c-=2;
		n-=1;
	}
}