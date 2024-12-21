/*
 * Calculator.cpp
 *
 *  Date: [11/11/2024]
 *  Author: [Adrian Zermeno]
 */

#include <iostream>

using namespace std;

// Fix: Changed 'void main()' to 'int main()' as 'void main()' is not standard in C++
int main() {
    char statement[100];  // This variable is declared but not used; you can remove it if unnecessary.
    int op1, op2;         // Fix: Variable order corrected for clarity. First operand should be op1.
    char operation;
    char answer = 'Y';    // Fix: Changed double quotes to single quotes for char initialization.

    // Loop to allow the user to enter multiple expressions
    while (answer == 'Y' || answer == 'y') {
        cout << "Enter expression (e.g., 2 + 3): " << endl;
        cin >> op1 >> operation >> op2;  // Fix: Corrected operand order in input.

        // Perform the appropriate operation based on user input
        if (operation == '+') {  // Fix: Removed semicolon after each if statement.
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
        }
        else if (operation == '-') {  // Fix: Used 'else if' for clearer control flow.
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        }
        else if (operation == '*') {
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
        }
        else if (operation == '/') {
            if (op2 != 0) {  // Fix: Added division by zero check.
                cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
            }
            else {
                cout << "Error: Division by zero is undefined." << endl;
            }
        }
        else {
            cout << "Error: Invalid operator. Please use +, -, *, or /." << endl;
        }

        // Prompt user to continue or terminate the program
        cout << "Do you wish to evaluate another expression? (Y/N): " << endl;
        cin >> answer;
    }

    cout << "Program Finished." << endl;  // Program exit message.
    return 0;  // Fix: Added return statement to main.
}
