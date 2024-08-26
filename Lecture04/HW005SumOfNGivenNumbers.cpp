#include<iostream>
using namespace std;

int main(){
	int n,a,i=1,s=0;
	cin>>n;
	cin>>a;
	s+=a;
	while(i<=n-1){
		cin>>a;
		s+=a;
		i+=1;
	}
	cout<<s;
}