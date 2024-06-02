#include <iostream>
using namespace std;

bool isPrime(int num) {
    // Corner cases
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;

    // This is checked so that we can skip middle five numbers in the loop
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }

    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}
