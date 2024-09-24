#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;

    char op;
    cout << "Enter operation (+, *, -, /):" << endl;
    cin >> op;

    switch (op) {
        case '+': {
            int c = a + b;
            cout << c << endl;
            break;
        }
        case '*': {
            cout << a * b << endl;
            break;
        }
        case '-': {
            cout << a - b << endl;
            break;
        }
        case '/': {
            if (b != 0) {
                cout << a / b << endl;
            } else {
                cout << "Division by zero is not allowed" << endl;
            }
            break;
        }
        default: {
            cout << "Choose from +, *, -, / please..." << endl;
            break;
        }
    }

    return 0;
}
