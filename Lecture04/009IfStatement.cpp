#include<iostream>
using namespace std;
int main(){
	int age;
	cin>>age;
	if(age>=18){
		cout<<"You can vote"<<endl;
		return 0;
	}

	cout<<"you can not vote";
	return 0;
}