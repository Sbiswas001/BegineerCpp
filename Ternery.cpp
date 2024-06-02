//Program to find greatest value using ternery operator

#include <iostream>

int main(){
    int a, b, c;
    std::cout<<"Enter two numbers: ";
    std::cin>>a>>b;
    c = a > b ? a : b;
    std::cout<<"Greatest value is "<<c;
}