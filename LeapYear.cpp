//Program to check if a year is a leap year

#include <iostream>

int main(){
    int year;
    std::cout<<"Enter year: ";
    std::cin>>year;
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                std::cout<<year<<" is a leap year.";
            } else{
                std::cout<<year<<" is not a leap year.";
            }
        } else{
            std::cout<<year<<" is a leap year.";
        }
    } else{
        std::cout<<year<<" is not a leap year.";
    }
}