#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cin>>n;
	while(i<=n){
		int j=1;
		int k=1;
		while(k<=n-i){
			cout<<" ";
			k+=1;
		}
		while(j<=i){
			cout<<"*";
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
}