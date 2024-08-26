#include<iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;
	int a;
	a=int(ch);
	if(a>=97 and a<=122){
		cout<<"lowercase"<<endl;
	}else if(a>=65 and a<=90){
		cout<<"uppercase"<<endl;
	}else if(ch>='0' and ch<='9'){
		cout<<"digit"<<endl;
	}else{
		cout<<"special character";
	}
	return 0;
}