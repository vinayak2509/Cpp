#include<iostream>
using namespace std;

int main(){
	int marks=0;
	char grade;
	cin>>marks;

	if(90<marks and marks<=100){
		cout<<"your grade is A"<<endl;
		grade='A';
	}else if(marks>=81 and marks<=90){
		cout<<"your grade is B"<<endl;
		grade='B';
	}else if(marks>=71 and marks<=80){
		cout<<"your grade is C"<<endl;
		grade='C';
	}
	else if(marks>=61 and marks<=70){
		cout<<"your grade is D"<<endl;
		grade='D';
	}else{
		cout<<"you have failed"<<endl;
		grade='F';
	}

	/*if(grade=='A'){
		cout<<"very good";
	}else if(grade=='B'){
		cout<<"good";
	}else if(grade=='C'){
		cout<<"average";
	}else if(grade=='D'){
		cout<<"poor";
	}else if(grade=='F'){
		cout<<"failed";
	}*/

	switch(grade){
		case 'A': cout<<"very good"<<endl; break;
		case 'B': cout<<"good"<<endl; break;
		case 'C': cout<<"average"<<endl; break;
		case 'D': cout<<"poor"<<endl; break;
		case 'F': cout<<"Failed"<<endl; break;
	}

	return 0;
}