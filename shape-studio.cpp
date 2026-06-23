#include <iostream>
using namespace std;
class Shape {
public:
    virtual double Area() const = 0;
    virtual void Display() const = 0;
    virtual ~Shape() = default;
};
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double Area() const override { return length * width; }
    void Display() const override {
        cout << "Rectangle: length=" << length
             << ", width=" << width
             << ", area=" << Area() << endl;
    }
};
class Circle : public Shape {
    double radius;
public:
    explicit Circle(double r) : radius(r) {}
    double Area() const override { return 3.141 * radius * radius; }
    void Display() const override {
        cout << "Circle: radius=" << radius
             << ", area=" << Area() << endl;
    }
};
int main() {
    cout << "Abstract Class with Virtual Functions" << endl;
    Rectangle rect(4, 3);
    Circle circ(2.5);
    Shape* shapes[] = { &rect, &circ };
    for (Shape* s : shapes) {
        s->Display();
    }
    return 0;
}
