#include<iostream>
using namespace std;

int main(){
	int count=0;
	while(true){
		char ch;
		//cin>>c;//ignores whitespaces(' ',' \n','\t')
		ch=cin.get();
		if(ch=='$'){
			cout<<"count = "<<count;
			break;
		}
		count+=1;
	}
	return 0;
}