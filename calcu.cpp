#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

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
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is undefined." << endl;
                break;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            break;
    }

    // Output the result
    cout << "Result: " << result << endl;

    return 0;
}
