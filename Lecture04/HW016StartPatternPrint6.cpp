#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cin>>n;
	while(i<=n){
		int j=1;
		int k=1;
		while(k<n-i+1){
			cout<<" ";
			k+=1;
		}
		while(j<=n){
			cout<<"*";
			j+=1;
		}
		cout<<endl;
		i+=1;
	}
}