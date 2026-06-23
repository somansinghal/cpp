#include <iostream>
using namespace std;
class Student {
public:
    int roll;
    string name;
    void setData(int r, string n) {
        roll = r;
        name = n;
    }
    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
}
int main() {
    int *ptr = new int;
    *ptr = 100;
    cout << "Dynamic Integer Value: " << *ptr << endl;
    delete ptr;
    int n = 5;
    int *arr = new int[n];
    cout << "\nDynamic Array Elements:\n";
    for(int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
        cout << arr[i] << " ";
    }
    delete[] arr;
    Student *s = new Student;
    s->setData(101, "Soman");
    cout << "\n\nDynamic Object Data:\n";
    s->display();
    delete s;
    return 0;
}
