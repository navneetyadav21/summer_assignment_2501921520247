#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print ascending numbers 1 to i
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        // Print descending numbers i-1 down to 1
        for (int k = i - 1; k >= 1; k--) {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}