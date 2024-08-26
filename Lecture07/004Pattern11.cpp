#include<iostream>
using namespace std;

int main(){
	int n,n1,n2;
	cin>>n;
	n1=(n+1)/2;
	for(int i=1;i<=n1;i++){
		for(int k=1;k<=n1-i;k++){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int l=1;l<=i-1;l++){
				cout<<"*";
		}
		cout<<endl;
	}

	for(int x=n1-1;x>=1;x--){
	  for(int z=n1-x;z!=0;z--){
	    cout<<" ";
	  }
	  for(int y=x-1;y>=1;y--){
	    cout<<"*";
	  }

	  for(int y=x;y>=1;y--){
	    cout<<"*";
	  }
	  cout<<endl;
	}
}