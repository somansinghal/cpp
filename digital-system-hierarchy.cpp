#include <iostream>
using namespace std;
class EDevice {
public:
    void describeDevice() const {
        cout << "I am an electronic device" << endl;
    }
};
class Computer : public EDevice {
public:
    void describeComputer() const {
        cout << "I am a Computer/Laptop" << endl;
    }
};
class OperatingSystem : public Computer {
public:
    void describeOS() const {
        cout << "I am an operating system that helps humans to interact with Computer/Laptop" << endl;
    }
};
int main() {
    cout << "Multilevel Inheritance" << endl;
    OperatingSystem os;
    os.describeDevice();
    os.describeComputer();
    os.describeOS();
    return 0;
}
