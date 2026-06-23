#include <iostream>
#include <string>
using namespace std;
void show() {
    cout << "show(): No parameters provided" << endl;
}
void show(const string& name) {
    cout << "show(name): Name = " << name << endl;
}
void show(const string& name, int rollno) {
    cout << "show(name, rollno): Name = " << name << ", Roll No = " << rollno << endl;
}
int main() {
    cout << "Demonstrating Function Overloading in C++" << endl;
    show();
    show(string("Alice"));
    show(string("Bob"), 101);
    return 0;
}
