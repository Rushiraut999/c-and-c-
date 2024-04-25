#include<math.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0){
        int lastDigit=n%10;
        sum+=pow(lastDigit,3);
        n=n/10;
    }
    cout<<sum;
    if(sum ==originaln){
        cout<<"number is armstrong number";
    }
    else{
        cout<<"number is not armstrong number";
    }
return 0;
}