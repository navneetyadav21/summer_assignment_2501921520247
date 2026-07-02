#include <iostream>
using namespace std;

// Recursive function to reverse a number
int reverseNumber(int n, int reversed = 0) {
    // Base case
    if (n == 0) {
        return reversed;
    }
    // Recursive case: pull last digit, shift it into 'reversed'
    return reverseNumber(n / 10, reversed * 10 + n % 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isNegative = false;
    if (num < 0) {
        isNegative = true;
        num = -num;
    }

    int result = reverseNumber(num);

    cout << "Reversed number = " << (isNegative ? -result : result) << endl;

    return 0;
}