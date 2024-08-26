#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int i=n;i>=0;i--){
		int a=65;
		for(int j=1;j<=i;j++){
			cout<<char(a);
			a++;
		}
		cout<<endl;
	}
}