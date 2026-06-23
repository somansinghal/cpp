#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    cout << "Length of first string: " << str1.length() << endl;
    if (str1 == str2)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;
    cout << "Concatenated String: " << str1 + str2 << endl;
    cout << "Substring (first 3 characters): " << str1.substr(0, 3) << endl;
    return 0;
}
