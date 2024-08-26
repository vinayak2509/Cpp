#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n;
	cin>>k;
	int mask=~(1<<k);
	cout<<(n&mask);
}