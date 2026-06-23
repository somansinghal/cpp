#include <iostream>
using namespace std;
int value = 100;
class Rectangle {
private:
    float length;
    float width;
public:
    static int objectCount;
    Rectangle(float l, float w);
    float area() const;
    float circumference() const;
    friend void compare(const Rectangle& r1, const Rectangle& r2);
};
int Rectangle::objectCount = 0;
Rectangle::Rectangle(float l, float w) : length(l), width(w) {
    ++Rectangle::objectCount;
}
float Rectangle::area() const {
    return length * width;
}
float Rectangle::circumference() const {
    return 2 * (length + width);
}
void compare(const Rectangle& r1, const Rectangle& r2) {
    cout << "\nComparing Rectangles:\n";
    if (r1.length == r2.length && r1.width == r2.width) {
        cout << "Both Rectangles are Equal in dimensions.\n";
    } else {
        cout << "Rectangles are NOT equal in dimensions.\n";
    }
}
int main() {
    cout << "Demonstrating scope resolution operator (::)\n";
    int value = 42;
    cout << "Local value: " << value << '\n';
    cout << "Global value via ::value: " << ::value << '\n';
    Rectangle r1(10, 5);
    Rectangle r2(8, 6);
    cout << "\nRectangle 1 Area: " << r1.area() << '\n';
    cout << "Rectangle 1 Circumference: " << r1.circumference() << '\n';
    cout << "\nRectangle 2 Area: " << r2.area() << '\n';
    cout << "Rectangle 2 Circumference: " << r2.circumference() << '\n';
    compare(r1, r2);
    cout << "\nNumber of Rectangle objects created (Rectangle::objectCount): "
         << Rectangle::objectCount << '\n';

    return 0;
}
