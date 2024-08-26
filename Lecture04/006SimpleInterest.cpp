#include<iostream>
using namespace std;
int main(){
	int p,r,t,si;
	cin>>p>>r>>t;
	//si=(p*r*t)/100;  does not account for float variables

	si=(float(p)*r*t)/100;
	cout<<si;

	return 0;
}