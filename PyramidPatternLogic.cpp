#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows for the pattern: ";
    cin >> rows;

    // Outer loop handles the number of lines (rows)
    for (int i = 1; i <= rows; i++) {
        // Inner loop handles how many stars to print on each line
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Move to the next line after finishing a row
        cout << endl;
    }

    return 0;
}
