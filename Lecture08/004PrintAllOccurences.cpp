#include<iostream>
using namespace std;

int main(){
	int n,t,c=0;
	cin>>n>>t;
	int arr[n]={10,20,30,10,20};
	for(int i=0;i<n;i++){
		if(arr[i]==t){
			cout<<i<<endl;
			c++;
		}	
	}
	if(c==0){
		cout<<-1<<endl;
	}

	return 0;
}