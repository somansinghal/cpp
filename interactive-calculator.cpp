#include <iostream>
using namespace std;
int main() {
    char op;
    int a, b;
    char choice;
    do {
        cout << "\nEnter operator (+, -, *, /, %): ";
        cin >> op;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        switch (op) {
            case '+':
                cout << "Result = " << a + b;
                break;
            case '-':
                cout << "Result = " << a - b;
                break;
            case '*':
                cout << "Result = " << a * b;
                break;
            case '/':
                if (b != 0)
                    cout << "Result = " << a / b;
                else
                    cout << "Division by zero not allowed";
                break;
            case '%':
                cout << "Result = " << a % b;
                break;
            default:
                cout << "Invalid Operator";
        }
        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
