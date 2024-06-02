//Program to convert Miles to kilometers

#include <iostream>

int main(){
    double miles, km;
    std::cout<<"Enter miles: ";
    std::cin>>miles;
    km=miles/1.609;
    std::cout<<miles<<" miles = "<<km<<" km";
}