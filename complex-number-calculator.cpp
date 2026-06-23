#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.real << " " << (c.imag < 0 ? "-" : "+") << " i " << (c.imag < 0 ? -c.imag : c.imag);
        return os;
    }
};
int main() {
    cout << "Operator Overloading for Complex Numbers (+ and -)" << endl;
    Complex c1(3, 4);
    Complex c2(1.5, -2);
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1 + c2 = " << sum << endl;
    cout << "c1 - c2 = " << diff << endl;
    return 0;
}
