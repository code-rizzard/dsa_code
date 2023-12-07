#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    // Input operation and numbers
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform the selected operation using a switch statement
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is undefined." << endl;
                return 1;  // Exit with an error code
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;  // Exit with an error code
    }

    // Output the result
    cout << "Result: " << result << endl;

    return 0;
}
