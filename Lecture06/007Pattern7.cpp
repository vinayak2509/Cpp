#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n-i;k++){
			cout<<"  ";
		}
		int d=i;
		for(int j=1;j<=i;j++){
			cout<<d<<" ";
			d++;
		}
		for(int l=2*i-2;l>=i;l--){
				cout<<l<<" ";
		}

		cout<<endl;
	}
}