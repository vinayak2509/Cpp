#include<iostream>
using namespace std;

int main(){
	int x=0,y=0;
	while(true){
		char ch;
		ch=cin.get();
		if(ch=='\n'){
			break;
		}else if(ch=='N' or ch=='n'){
			x++;
		}else if(ch=='S' or ch=='s'){
			x--;
		}else if(ch=='W' or ch=='w'){
			y--;
		}else if(ch=='E' or ch=='e'){
			y++;
		}
	}


	if(x>0){
		for(int i=1;i<=x;i++){
			cout<<"E";
		}
	}

	if(y>0){
		for(int i=1;i<=y;i++){
			cout<<"N";
		}
	}
	if(y<0){
		for(int j=-1;j>=y;j--){
			cout<<"S";
		}
	}
	if(x<0){
		for(int j=-1;j>=x;j--){
			cout<<"W";
		}
	}
	return 0;
}