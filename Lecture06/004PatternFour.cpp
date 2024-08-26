#include<iostream>
using namespace std;

int main(){
	int n;
	bool s=0;
	cin>>n;

	for(int i=1;i<=n;i++){
		if(i%2==0){
			s=1;
		}else{
			s=0;
		}
		for(int j=0;j<i;j++){
			s=not(s);
			cout<<s;			
		}

		cout<<endl;
	}
	return 0;
}