#include <iostream>
using namespace std;
int main() {
    int marks[5], total = 0;
    float percentage;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks of subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }
    cout << "\nMarks obtained:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": " << marks[i] << endl;
    }
    percentage = (total / 500.0) * 100;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}
