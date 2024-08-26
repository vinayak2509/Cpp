#include<iostream>
using namespace std;

int main(){
	int a=10,b=5;

	//addition
	cout<<"a+b= "<<a+b<<endl;

	//subtraction
	cout<<"a-b= "<<a-b<<endl;

	//multiplication
	cout<<"a*b= "<<a*b<<endl;

	//division
	cout<<"a/b= "<<a/b<<endl;

	//modulus
	cout<<"a%b= "<<a%b<<endl;

	int x=7,y=2;

	cout<<"x/y= "<<x/y<<endl; // expected output 3.5, actual output 3
	cout<<"x/y= "<<(x*1.0)/y<<endl;// exp=3.5 act=3.5
	cout<<"x/y= "<<float(x)/y<<endl;// exp=3.5 act=3.5
	cout<<"x/y= "<<x/float(y)<<endl;// exp=3.5 act=3.5
	cout<<"x/y= "<<static_cast<float>(x)/y<<endl;//exp =3.5 act=3.5
	cout<<"x/y= "<<x/static_cast<float>(y)<<endl;//exp =3.5 act=3.5

	cout<<"3+5%4= "<<3+5%4<<endl;//output=4
	cout<<"8-4/2= "<<8-4/2<<endl;//output=6
	cout<<"(3+5)*4= "<<(3+5)*4<<endl;//output=32
	cout<<"(8-4)/2= "<<(8-4)/2<<endl;//output=2
	cout<<"100/10*10= "<<100/10*10<<endl;//output=100
	cout<<"5-2+3= "<<5-2+3<<endl;//output=6

	return 0;
}