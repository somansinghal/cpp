#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    inline float area() {
        return length * width;
    }
    float circumference() {
        return 2 * (length + width);
    }
    friend void compare(Rectangle r1, Rectangle r2);
};
void compare(Rectangle r1, Rectangle r2) {
    cout << "\nComparing Rectangles:\n";

    if (r1.length == r2.length && r1.width == r2.width) {
        cout << "Both Rectangles are Equal in dimensions.\n";
    }
    else {
        cout << "Rectangles are NOT equal in dimensions.\n";
    }
}
int main() {
    Rectangle r1(10, 5);
    Rectangle r2(8, 6);
    cout << "Rectangle 1 Area: " << r1.area() << endl;
    cout << "Rectangle 1 Circumference: " << r1.circumference() << endl;
    cout << "\nRectangle 2 Area: " << r2.area() << endl;
    cout << "Rectangle 2 Circumference: " << r2.circumference() << endl;
    compare(r1, r2);
    return 0;
}
