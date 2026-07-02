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
        // Print ascending characters A to (A + i - 1)
        char ch = 'A';
        for (int k = 1; k <= i; k++) {
            cout << ch;
            ch++;
        }
        // Print descending characters back down to A
        ch -= 2; // step back one from the last printed, then go down
        for (int k = i - 1; k >= 1; k--) {
            cout << ch;
            ch--;
        }
        cout << endl;
    }

    return 0;
}