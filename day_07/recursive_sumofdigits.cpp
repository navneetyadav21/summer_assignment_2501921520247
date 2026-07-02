#include <iostream>
using namespace std;

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    // Base case
    if (n == 0) {
        return 0;
    }
    // Recursive case: last digit + sum of remaining digits
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Handle negative numbers by taking absolute value
    if (num < 0) {
        num = -num;
    }

    cout << "Sum of digits = " << sumOfDigits(num) << endl;

    return 0;
}