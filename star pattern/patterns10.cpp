#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
       int ver=i;
        for(int k=ver;k>=1;k--){
            cout<<k;
        }
        for(int l=2;l<=ver;l++){
            cout<<l;
        }
        cout<<endl;
        }
  return 0;
}