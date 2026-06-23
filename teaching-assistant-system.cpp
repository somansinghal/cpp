#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void getData() {
        cout << "Enter Name: ";
        cin >> name;
    }

    void showData() {
        cout << "Name: " << name << endl;
    }
};

class Student : virtual public Person {
public:
    int rollNo;

    void getStudentData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void showStudentData() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Employee : virtual public Person {
public:
    int empID;

    void getEmployeeData() {
        cout << "Enter Employee ID: ";
        cin >> empID;
    }

    void showEmployeeData() {
        cout << "Employee ID: " << empID << endl;
    }
};

class Teaching_Assistant : public Student, public Employee {
public:
    void display() {
        showData();
        showStudentData();
        showEmployeeData();
    }
};

int main() {
    Teaching_Assistant ta;
    ta.getData();
    ta.getStudentData();
    ta.getEmployeeData();
    cout << "\n Teaching Assistant Details " << endl;
    ta.display();
    return 0;
}
