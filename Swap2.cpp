//Program to swap values of two variables without using a third variable

#include <iostream>

int main(){
    int a, b;
    std::cout<<"Enter two numbers: ";
    std::cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    std::cout<<"a = "<<a<<" b = "<<b;
}