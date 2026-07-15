#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "=== Simple C++ Calculator ===\n\n";

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    cout << "\nResult: ";

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
            break;

        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
            } else {
                cout << "Error! Division by zero is not allowed.\n";
            }
            break;

        default:
            cout << "Error! Invalid operator entered.\n";
            break;
    }

    return 0;
}
