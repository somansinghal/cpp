#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << "The number is Even. \n";
    else
        cout << "The number is Odd. \n";
    return 0;
}
