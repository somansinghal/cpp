#include <iostream>
using namespace std;
class edevice {
public:
    void displayDevice() const {
        cout << "I am electronic device" << endl;
    }
};
class laptop {
public:
    void displayLaptopComponent() const {
        cout << "I am key component of laptop." << endl;
    }
};
class keyboard : public edevice, public laptop {
public:
    void displayKeyboard() const {
        cout << "I am keyboard" << endl;
    }
};
int main() {
    cout << "Multiple Inheritance" << endl;
    keyboard kb;
    kb.displayDevice();
    kb.displayLaptopComponent();
    kb.displayKeyboard();
    return 0;
}
