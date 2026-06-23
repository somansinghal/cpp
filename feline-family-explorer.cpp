#include <iostream>
using namespace std;
class Feline {
public://
    void eat() const {
        cout << "Felines eat meat." << endl;
    }
};
class Lion : public Feline {
public:
    void feature() const {
        cout << "Lion roars" << endl;
    }
};
class Tiger : public Feline {
public:
    void feature() const {
        cout << "Tiger hunts silently" << endl;
    }
}
class Cat : public Feline {
public:
    void feature() const {
        cout << "Cat says Meow" << endl;
    }
};
int main() {
    cout << "Hierarchical Inheritance" << endl;
    Lion lion;
    Tiger tiger;
    Cat cat;
    cout << "\nLion:" << endl;
    lion.eat();
    lion.feature();
    cout << "\nTiger:" << endl;
    tiger.eat();
    tiger.feature();
    cout << "\nCat:" << endl;
    cat.eat();
    cat.feature();
    return 0;
}
