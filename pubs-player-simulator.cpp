#include <iostream>
#include <string>
using namespace std;
class PubgPlayer {
private:
    string Name;
    int kills;
public:
    PubgPlayer() : Name("Noob"), kills(0) {
        cout << "Default constructor called." << endl;
    }
    PubgPlayer(const string& n, int k) : Name(n), kills(k) {
        cout << "Parameterized constructor called." << endl;
    }
    PubgPlayer(const PubgPlayer& other) : Name(other.Name), kills(other.kills) {
        cout << "Copy constructor called." << endl;
    }
    void displayInfo() const {
        cout << "Player Name: " << Name << ", Kills: " << kills << endl;
        if (kills == 0) {
            cout << "Go easy we have a new team member" << endl;
        } else {
            cout << "Ready to fight!!" << endl;
        }
    }
};
int main() {
    PubgPlayer p1;
    p1.displayInfo();
    cout << endl;
    PubgPlayer p2("ShadowSniper", 15);
    p2.displayInfo();
    cout << endl;
    PubgPlayer p3 = p2;
    p3.displayInfo();
    return 0;
}
