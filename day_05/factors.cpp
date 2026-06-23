#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    cout << "The factors of " << num << " are: ";

    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            cout << i << " ";
            if (i != num / i) {
                cout << num / i << " ";
            }
        }
    }

    cout << endl;
    return 0;
}