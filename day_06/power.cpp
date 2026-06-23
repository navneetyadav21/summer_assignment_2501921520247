#include <iostream>
using namespace std;

int main() {
    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    double result = 1.0;
    long long absN = abs(n); 

    while (absN > 0) {
        if (absN % 2 == 1) {
            result *= x;
        }
        x *= x;
        absN /= 2;
    }

    if (n < 0) {
        result = 1.0 / result;
    }

    cout << "Result: " << result << endl;
    return 0;
}