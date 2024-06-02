#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int num) {
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    unsigned long long result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    unsigned long long result = factorial(number);
    if (number >= 0) {
        cout << "The factorial of " << number << " is " << result << "." << endl;
    }

    return 0;
}
