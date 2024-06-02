//Program to swap values of two variables using a third variable

#include <iostream>

int main(){
    int a, b, temp;
    std::cout<<"Enter two numbers: ";
    std::cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    std::cout<<"a = "<<a<<" b = "<<b;
}