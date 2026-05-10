/*
 * PROJECT: Pattern Generation System (Right-Angled Triangle)
 * COURSE: Programming Fundamentals (PF) - Semester 2
 * UNIVERSITY: Sir Syed CASE Institute of Technology (SS-CASE-IT)
 * AUTHOR: Aisha Riaz
 * CONCEPTS: Nested Loops, Iterative Logic, O(n²) Time Complexity
 */

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows for the pattern: ";
    cin >> rows;

    // Outer loop: Manages the vertical rows
    // It runs 'rows' number of times.
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop: Manages the horizontal stars per row
        // The condition 'j <= i' ensures the number of stars 
        // matches the current row number.
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        
        // Newline: Necessary to break the row and start the next
        cout << endl;
    }

    return 0;
}
