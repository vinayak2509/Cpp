#include<iostream>
#include <climits>
using namespace std;

int main(){
	int n,ssf;
	cin>>n;
	ssf=INT_MAX;
	while(n>0){
		int a;
		cin>>a;
		if(a<ssf){
			ssf=a;
		}
		n-=1;
	}
	cout<<ssf<<endl;

	return 0;
}