#include <iostream>

using namespace std;

int main() {
    float NUM1, NUM2, outcome;
    char operation;

    cout << "Enter the first number: ";
    cin >> NUM1;

    cout << "Enter the second number: ";
    cin >> NUM2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '-':
            outcome = NUM1-NUM2;
            cout << NUM1 << " minus " << NUM2 << " equals " << outcome << endl;
            break;
        case '+':
            outcome = NUM1-NUM2;
            cout << NUM1 << " plus " << NUM2 << " equals " << outcome << endl;
            break;
        case '*':
            outcome = NUM1*NUM2;
            cout << NUM1 << " multiplied by " << NUM2 << " equals " << outcome << endl;
            break;
        case '/':
            
            if (NUM2 != 0) {
                outcome = NUM1 /NUM2;
                cout << NUM1 << " divided by " << NUM2 << " equals " << outcome << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please choose +, -, *, or /." << endl;
            break;
    }

    return 0;
}