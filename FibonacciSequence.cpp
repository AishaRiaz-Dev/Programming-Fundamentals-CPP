#include <iostream>
using namespace std;

int main() {
    int numberOfTerms;
    int firstTerm = 0, secondTerm = 1, nextTerm = 0;

    cout << "Enter the number of Fibonacci terms to display: ";
    cin >> numberOfTerms;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= numberOfTerms; i++) {
        // First, print the current term
        if (i == 1) {
            cout << firstTerm << ", ";
            continue;
        }
        if (i == 2) {
            cout << secondTerm << ", ";
            continue;
        }

        // Calculate the next term
        nextTerm = firstTerm + secondTerm;
        
        // Output formatting: add a comma unless it's the last number
        cout << nextTerm << (i == numberOfTerms ? "" : ", ");

        // Update terms for the next iteration
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    cout << endl;
    return 0;
}
