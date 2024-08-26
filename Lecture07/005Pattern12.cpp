#include<iostream>
using namespace std;

int main(){
  int n,n1,n2;
  cin>>n;
  n1=(n-1)/2;
  n2=n1;
  
  for(int i=1;i<=n;i++){
    cout<<"*";
  }
  cout<<endl;
  for(int i=n1;i>0;i--){
    for(int j=0;j<i;j++){
      cout<<'*';
    }
    for(int k=1;k<=n1-i+1;k++){
      cout<<" ";
    }
    for(int l=0;l<=n1-i-1;l++){
      cout<<" ";
    }
    for(int r=1;r<=i;r++){
      cout<<"*";
    }
    cout<<endl;
  }

  for(int i=1;i<=n2-1;i++){
    for(int j=1;j<=i+1;j++){
      cout<<"*";
    }
    for(int p=n1;p>=0;p--){
      cout<<" ";
    }
    n1=n1-2;
    for(int w=1;w<=i+1;w++){
      cout<<"*";
    }
    cout<<endl;
  }
    for(int i=1;i<=n;i++){
    cout<<"*";
  }
  
}