#include<iostream>
using namespace std;

int main(){
	int n,p,i=0;
	cin>>n;
	cin>>p;
	double ans=0;
	double inc=0.1;
	while(i<p){
		while(ans*ans<=n){
			ans=ans+inc;
		}
		ans=ans-inc;
		inc=inc/10;
		i+=1;
	}
	cout<<ans<<endl;
	return 0;
}