#include<iostream>
using namespace std;

int main(){
	int n,i=1,c;
	cin>>n;
	c=n*2;
	while(i<=n){
		int j=1;
		int k=2;
		int m=1;
		while(j<=i){
			cout<<"*";
			j+=1;
		}

		while(k<c){
			cout<<" ";
			k+=1;
		}
		while(m<=i){
			cout<<"*";
			m+=1;
		}
		cout<<endl;
		i+=1;
		c-=2;
	}
}