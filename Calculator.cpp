//Program to execute addition, substraction, multiplication or division based on user choice

#include <iostream>

int main(){
    int choice; 
    double num1, num2, result=0;
    std::cout<<"Enter two numbers: ";
    std::cin>>num1>>num2;
    std::cout<<"Enter 1 for addition, 2 for substraction, 3 for multiplication and 4 for division: ";
    std::cin>>choice;
    if(choice<1 || choice>4){
        std::cout<<"Wrong choice.";
        exit(0);
    }
    switch (choice){
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;
    }
    std::cout<<"Result is "<<result;
}