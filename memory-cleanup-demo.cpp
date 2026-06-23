#include <iostream>
using namespace std;
class Demo {
private:
    int* ptr;
public:
    Demo() : ptr(new int(0)) {
        cout << "constructor called." << endl;
    }
    ~Demo() {
        delete ptr;
        ptr = nullptr;
        cout << "destructor called." << endl;
    }
    void setValue(int v) { *ptr = v; }
    int getValue() const { return *ptr; }
};
int main() {
    cout << "Creating automatic (stack) Demo object..." << endl;
    {
        Demo d;
        d.setValue(42);
        cout << "Value in d: " << d.getValue() << endl;
    }

    cout << "\nCreating dynamic (heap) Demo object..." << endl;
    Demo* p = new Demo();
    p->setValue(7);
    cout << "Value in *p: " << p->getValue() << endl;
    delete p;
    return 0;
}
