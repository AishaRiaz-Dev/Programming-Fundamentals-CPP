/*
 * PROJECT: Student Record Management System
 * COURSE: Programming Fundamentals (PF) - Semester 2
 * UNIVERSITY: Sir Syed CASE Institute of Technology (SS-CASE-IT)
 * AUTHOR: Aisha Riaz
 * CONCEPTS: Array Manipulation, Linear Search, User Interaction Loops
 */

#include <iostream>
#include <string>

using namespace std;

// Using constants makes the code easier to maintain and update
const int MAX_CAPACITY = 10;

int main() {
    int rollNumbers[MAX_CAPACITY];
    int currentSize = 0;
    int choice;

    // Use a do-while loop to ensure the menu displays at least once
    do {
        cout << "\n--- Student Record System ---" << endl;
        cout << "1. Insert Roll Number" << endl;
        cout << "2. Display All Records" << endl;
        cout << "3. Search for a Roll Number" << endl;
        cout << "4. Check Frequency" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Choice 1: Insertion with Overflow Protection
        if (choice == 1) {
            if (currentSize < MAX_CAPACITY) {
                cout << "Enter Roll Number to insert: ";
                cin >> rollNumbers[currentSize++];
                cout << "Successfully added." << endl;
            } else {
                cout << "Error: Storage is full!" << endl;
            }
        } 
        // Choice 2: Traversal and Output
        else if (choice == 2) {
            if (currentSize == 0) {
                cout << "No records found." << endl;
            } else {
                cout << "Current Records: ";
                for (int i = 0; i < currentSize; i++) {
                    cout << rollNumbers[i] << " ";
                }
                cout << endl;
            }
        } 
        // Choice 3: Linear Search Algorithm
        else if (choice == 3) {
            int target;
            bool found = false;
            cout << "Enter Roll Number to search: ";
            cin >> target;
            for (int i = 0; i < currentSize; i++) {
                if (rollNumbers[i] == target) {
                    found = true;
                    break;
                }
            }
            if (found) cout << "Record found in system." << endl;
            else cout << "Record not found." << endl;
        } 
        // Choice 4: Frequency Count Logic
        else if (choice == 4) {
            int target, count = 0;
            cout << "Enter Roll Number to check frequency: ";
            cin >> target;
            for (int i = 0; i < currentSize; i++) {
                if (rollNumbers[i] == target) count++;
            }
            cout << "The roll number " << target << " appears " << count << " times." << endl;
        }

    } while (choice != 5); // Termination condition

    cout << "Exiting system. Goodbye!" << endl;
    return 0;
}
