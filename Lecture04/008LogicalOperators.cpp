#include<iostream>
using namespace std;

int main(){

	cout<<"p=true and q=true ="<<(true&&true)<<endl;
	cout<<"p=true and q=false ="<<(true&&false)<<endl;
	cout<<"p=false and q=true ="<<(false&&true)<<endl;
	cout<<"p=false and q=false ="<<(false&&false)<<endl;


	cout<<"p=true or q=true ="<<(true||true)<<endl;
	cout<<"p=true or q=false ="<<(true||false)<<endl;
	cout<<"p=false or q=true ="<<(false||true)<<endl;
	cout<<"p=false or q=false ="<<(false||false)<<endl;

	return 0;
}