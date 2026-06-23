#include <iostream>

using namespace std;

int main() {
    long long num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 1) {
        cout << "No prime factors for numbers less than or equal to 1." << endl;
        return 1;
    }

    long long maxPrime = -1;

    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }

    for (long long i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }

    if (num > 2) {
        maxPrime = num;
    }

    cout << "The largest prime factor is: " << maxPrime << endl;

    return 0;
}