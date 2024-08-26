#include<iostream>
using namespace std;

int main(){
	int count=0,u=0,l=0,d=0,s=0,w=0;
	while(true){
		char ch;
		ch=cin.get();
		int a=int(ch);
		if(ch=='$'){
			break;
		}else if(a>=97 and a<=122){
			l++;
		}else if(a>=65 and a<=90){
			u++;
		}else if(ch>='0' and ch<='9'){
			d++;
		}else if(ch==' ' or ch=='\n' or ch=='\t'){
			w++;
		}else{
			s++;
		}

		count+=1;
	}
	cout<<"lowercase = "<<l<<endl;
	cout<<"uppercase = "<<u<<endl;
	cout<<"digit = "<<d<<endl;
	cout<<"Special Chars = "<<s<<endl;
	cout<<"Whitespaces = "<<w<<endl;
	return 0;
}