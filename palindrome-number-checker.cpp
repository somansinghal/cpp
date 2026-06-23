#include <iostream>
using namespace std;

int main() {
    int num, original, reverse = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    
while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    
if (original == reverse)
        cout << "Palindrome Number \n";
    
else
        cout << "Not a Palindrome Number \n";
    return 0;
}
