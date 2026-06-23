#include <iostream>
using namespace std;
class Demo {
private:
    int x;
    string y;
public:
    Demo() {
        x = 0;
        y = "Default";
        cout << "Default constructor called." << endl;
    }
    Demo(int a, string b) {
        x = a;
        y = b;
        cout << "Parameterized constructor called." << endl;
    }
    Demo(const Demo &obj) {
        x = obj.x;
        y = obj.y;
        cout << "Copy constructor called." << endl;
    }
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};
int main() {
    Demo obj1;
    obj1.display();
    Demo obj2(42, "Hello");
    obj2.display();
    Demo obj3 = obj2;
    obj3.display();
    return 0;
}
