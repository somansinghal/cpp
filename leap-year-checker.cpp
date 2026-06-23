#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
   
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << "Leap Year \n";
    
  else
        cout << "Not a Leap Year \n";
    
  return 0;
}
