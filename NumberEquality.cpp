//Program to check for number equality

#include <iostream>

int main(){
    int a, b;
    std::cout<<"Enter two numbers: ";
    std::cin>>a>>b;
    if(a==b){
        std::cout<<"Numbers are equal.";
    } 
    else{
        std::cout<<"Numbers are not equal.";
    }
}