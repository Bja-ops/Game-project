#include <iostream>
using namespace std;

enum ClassType { WARRIOR, MAGE, PALADIN, ASSASIN};

struct Character {
    int strength;
    int dexterity;
    int intelligence;
    int faith;
    int health;
    string char_name;
    const int start_level;
    ClassType class_type;

    Character(string name, int hp, int str, int dex, int intel, int fai, int level, ClassType c_type)
        : char_name(name), health(hp), strength(str), dexterity(dex), intelligence(intel), faith(fai), start_level(level), class_type(c_type) {}

    void printClass()
    {
        cout << "Character: " << char_name << " | Class: ";
        switch (class_type) {
        case WARRIOR: cout << "Warrior"; break;
        case MAGE: cout << "Mage"; break;
        case PALADIN: cout << "Paladin"; break;
        case ASSASIN: cout << "Assasin"; break;
        }
        cout << endl;
    }
};

int main() {
    Character hero1("Arthur", 12, 12, 7, 5, 3, 1, WARRIOR);
    Character hero2("Merlin",6, 4, 6, 15, 10, 1, MAGE);
    Character hero3("Jarvis",8,4,10,17,20,1,PALADIN );
    Character hero4("Robin", 10,10, 15, 8,6,1,ASSASIN);
    hero1.printClass();
    hero2.printClass();
    hero3.printClass();
    hero4.printClass();

    return 0;
}
