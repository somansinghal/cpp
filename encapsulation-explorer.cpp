#include <iostream>
using namespace std;
class Person {
private:
    int salary;
protected:
    int age;
public:
    string name;
    void setSalary(int s) {
        salary = s;
    }
    void setAge(int a) {
        age = a;
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};
class Employee : public Person {
public:
    void showDetails() {
        cout << "\nInside Derived Class:\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Employee emp;
    emp.name = "Soman";
    emp.setAge(21);
    emp.setSalary(50000);
    cout << "Accessing through public method:\n";
    emp.displayPerson();
    emp.showDetails();
    return 0;
}
