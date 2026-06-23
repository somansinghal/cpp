#include <iostream>
using namespace std;
class Height {
private:
    int feet;
    int inches;
    void normalize() {
        int totalInches = feet * 12 + inches;
        feet = totalInches >= 0 ? totalInches / 12 : -(((-totalInches) + 11) / 12);
        inches = totalInches - feet * 12;
        if (inches < 0) {
            feet -= 1;
            inches += 12;
        }
    }
public:
    Height(int f = 0, int i = 0) : feet(f), inches(i) { normalize(); }
    Height& operator++() {
        inches += 1;
        normalize();
        return *this;
    }
    Height operator++(int) {
        Height temp(*this);
        inches += 1;
        normalize();
        return temp;
    }
    Height& operator--() {
        inches -= 1;
        normalize();
        return *this;
    }
    Height operator--(int) {
        Height temp(*this);
        inches -= 1;
        normalize();
        return temp;
    }
    friend ostream& operator<<(ostream& os, const Height& h) {
        os << h.feet << " ft " << h.inches << " in";
        return os;
    }
};
int main() {
    cout << "Unary Operator Overloading for Height (++ and --)" << endl;
    Height h(5, 11);
    cout << "Initial h: " << h << endl;
    cout << "\nPrefix ++ (++h): ";
    cout << (++h) << endl;
    cout << "Postfix ++ (h++): ";
    cout << (h++) << "  (printed old value)" << endl;
    cout << "After h++: " << h << endl;
    cout << "\nPrefix -- (--h): ";
    cout << (--h) << endl;
    cout << "Postfix -- (h--): ";
    cout << (h--) << "  (printed old value)" << endl;
    cout << "After h--: " << h << endl;
    Height h2(0, 0);
    cout << "\nStart h2: " << h2 << endl;
    cout << "--h2 => " << (--h2) << endl;
    cout << "++h2 => " << (++h2) << endl;
    return 0;
}
