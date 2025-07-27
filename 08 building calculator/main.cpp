#include <iostream>
using namespace std;

int main(){
    cout << "calculator" << endl;
    double num1, num2;
    char operation;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    double result;
    switch(operation) {
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
                cout << "Error: Division by zero!" << endl;
                return 1; // Exit with error code
            }
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
            return 1; // Exit with error code
    }   
    cout << "Result: " << result << endl;
    cout << "Thank you for using the calculator!" << endl;
    cout << "Have a great day!" << endl;
    return 0;
}