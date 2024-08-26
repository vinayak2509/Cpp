#include<iostream>
#include <climits>
using namespace std;

int main(){
	int n,lsf;
	cin>>n;
	lsf=INT_MIN;
	while(n>0){
		int a;
		cin>>a;
		if(a>lsf){
			lsf=a;
		}
		n-=1;
	}
	cout<<lsf<<endl;

	return 0;
}