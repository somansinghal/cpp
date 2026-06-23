#include <iostream>
using namespace std;
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside Call by Value: a = " << a << ", b = " << b << endl;
}
void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    swapValue(x, y);
    cout << "After Call by Value: x = " << x << ", y = " << y << endl;
    swapReference(x, y);
    cout << "After Call by Reference: x = " << x << ", y = " << y << endl;
    return 0;
}
