#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;

	if(a>b and a>c){
		cout<<"largest number ="<<a<<endl;
	} else if(b>c){
		cout<<"largest number ="<<b<<endl;
	} else {
		cout<<"largest number ="<<c<<endl;
	}
	return 0;
}