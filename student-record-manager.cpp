#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int roll;
    int marks[5];
public:
    int total_marks;
    float percentage;
    void setData() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> roll;
        total_marks = 0;
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks of subject " << i + 1 << ": ";
            cin >> marks[i];
            total_marks += marks[i];
        }
    }
    void displayData() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};
int main() {
    Student s;
    s.setData();
    s.percentage = (s.total_marks / 500.0) * 100;
    s.displayData();
    cout << "Total Marks: " << s.total_marks << endl;
    cout << "Percentage: " << s.percentage << "%" << endl;
    return 0;
}
