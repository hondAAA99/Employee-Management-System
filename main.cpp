#include <iostream>
#include <string>
using namespace std;

struct emps {
    unsigned number; // Removed unused variable
    unsigned id;
    string email;
    string name;
};

class funs {
private:
    unsigned employeeNum = 0;
    emps arr[1000]; // Array to store employee data

public:
    // Function to add employees
    void operation_adding(char O) {
        if (O == 'A') {
            cout << "Enter the number of employees: ";
            cin >> employeeNum;

            for (unsigned i = 0; i < employeeNum; i++) {
                cout << "Please enter the data for employee " << (i + 1) << ":" << endl;
                cout << "Name: ";
                cin >> arr[i].name;
                cout << "Email: ";
                cin >> arr[i].email;
                cout << "ID: ";
                cin >> arr[i].id;
                arr[i].number = i + 1; // Assign the employee number based on the index
            }
        }
    }

    // Function to search for an employee
    void operation_search(char O) {
        if (O == 'S') {
            unsigned searched;
            cout << "Enter the employee number to search: ";
            cin >> searched;

            bool found = false; // Flag to check if employee is found
            for (unsigned i = 0; i < employeeNum; i++) {
                if (arr[i].number == searched) { // Corrected to check arr[i].number
                    cout << "The name is: " << arr[i].name << endl;
                    cout << "The email is: " << arr[i].email << endl;
                    cout << "The ID is: " << arr[i].id << endl;
                    found = true; // Employee found
                    break; // Exit loop once found
                }
            }
            if (!found) {
                cout << "The employee not found" << endl; // Print if not found
            }
        }
    }

    // Function to exit the program
    void operation_exit(char O) {
        if (O == 'E') {
            cout << "The program is ending." << endl;
            exit(0);
        }
    }
};

int main() {
    char operation;
    char Return;

    funs fun_op;
    do {
        cout << "('A' for adding new employees, 'S' for searching, 'E' for exit the program)" << endl;
        cout << "Please enter the operation you need: ";
        cin >> operation;

        // Call the corresponding operation based on the user's input
        fun_op.operation_adding(operation);
        fun_op.operation_search(operation);
        fun_op.operation_exit(operation);

        cout << "Do you want another operation (y/n): ";
        cin >> Return;

    } while (Return == 'y');

    return 0; // Return 0 to indicate successful completion
}
