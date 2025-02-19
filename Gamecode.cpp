#include <iostream>
using namespace std;

enum ClassType { WARRIOR, MAGE, PRIEST};

struct Character {
    int strength;
    int dexterity;
    int intelligence;
    int faith;
    string char_name;
    const int start_level;
    ClassType class_type;

    Character(string name, int str, int dex, int intel, int fai, int level, ClassType c_type)
        : char_name(name), strength(str), dexterity(dex), intelligence(intel), faith(fai), start_level(level), class_type(c_type) {}

    void printClass()
    {
        cout << "Character: " << char_name << " | Class: ";
        switch (class_type) {
        case WARRIOR: cout << "Warrior"; break;
        case MAGE: cout << "Mage"; break;
        case PRIEST: cout << "Priest"; break;
        }
        cout << endl;
    }
};

int main() {
    Character hero1("Arthur", 12, 7, 5, 3, 1, WARRIOR);
    Character hero2("Merlin", 4, 6, 15, 10, 1, MAGE);

    hero1.printClass();
    hero2.printClass();

    return 0;
}
