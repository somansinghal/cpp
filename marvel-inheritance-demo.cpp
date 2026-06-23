#include <iostream>
using namespace std;
class Character {
protected:
    string Hero_name;
    int healthPoint;
public:
    void displayInfo() {
        cout << "Hero Name: " << Hero_name << endl;
        cout << "Health Points: " << healthPoint << endl;
    }
};
class Marvel : public Character {
public:
    void setCharacter(string name, int hp) {
        Hero_name = name;
        healthPoint = hp;
    }
    void TaglineMethod() {
        cout << "Catchphrase: Avengers Assemble!" << endl;
    }
};
int main() {
    Marvel hero;
    hero.setCharacter("Iron Man", 100);
    hero.displayInfo();
    hero.TaglineMethod();
    return 0;
}
