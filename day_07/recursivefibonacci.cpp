#include <iostream>
using namespace std;

// Recursive function to calculate nth Fibonacci number
unsigned long long fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    cout << "Enter the position (n): ";
    cin >> num;

    if (num < 0) {
        cout << "Fibonacci is not defined for negative numbers." << endl;
    } else {
        cout << "Fibonacci(" << num << ") = " << fibonacci(num) << endl;
    }

    return 0;
}