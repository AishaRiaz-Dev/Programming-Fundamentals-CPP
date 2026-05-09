/*
 * PROJECT: Fibonacci Sequence Generator
 * COURSE: Programming Fundamentals (1st Semester)
 * CONCEPTS: Iterative Logic, Control Structures, Variable Swapping
 * AUTHOR: Aisha Riaz
 * UNIVERSITY: SS-CASE-IT, Islamabad
 */

#include <iostream>
using namespace std;

int main() {
    int numberOfTerms;
    int firstTerm = 0, secondTerm = 1, nextTerm = 0;

    cout << "Enter the number of Fibonacci terms to display: ";
    cin >> numberOfTerms;

    cout << "Fibonacci Series: ";

    // Loop to calculate and display each term up to the user-defined limit
    for (int i = 1; i <= numberOfTerms; i++) {
        
        // Handle the first two base cases of the sequence
        if (i == 1) {
            cout << firstTerm << ", ";
            continue;
        }
        if (i == 2) {
            cout << secondTerm << ", ";
            continue;
        }

        // Logic: The next term is the sum of the previous two terms
        nextTerm = firstTerm + secondTerm;
        
        // Output formatting: Ternary operator to avoid a trailing comma at the end
        cout << nextTerm << (i == numberOfTerms ? "" : ", ");

        /* * Essential State Update:
         * Move the window forward by updating 'first' and 'second' 
         * for the next iteration of the loop.
         */
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    cout << endl;
    return 0;
}
