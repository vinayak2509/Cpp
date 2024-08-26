#include<iostream>
using namespace std;

int main(){
	int n,s=1,d=s;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n-i;k++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<d;
			d++;
		}
		s++;
		d=s;

		cout<<endl;
	}
}