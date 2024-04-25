#include<iostream>

int main(){
    int a = 5;
    int b = 3;
    int c;

    c=a;
    a=b;
    b=c;

    std::cout <<" value of a is "<<a;
    std::cout<<"\nvalue of b is "<<b;
    return 0;
}