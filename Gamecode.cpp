#include <iostream>
using namespace std;

enum ClassType { WARRIOR, MAGE, PALADIN, ASSASIN};

class Character
{
private:
    int level;
    int experience;
    int experienceToNextLevel;
public:
    Character(string name, int hp, int str, int dex, int intel, int fai, int level, ClassType c_type)
        : char_name(name), health(hp), strength(str), dexterity(dex), intelligence(intel), faith(fai), level(level), class_type(c_type), experience(0), experienceToNextLevel(100) {}

    void gainExperience(int amount)
    {
        experience += amount;
        cout << "Got: " << amount << " XP!\n";
        checkLevelUp();
    }

    void checkLevelUp()
    {
        while (experience >= experienceToNextLevel) {
            experience -= experienceToNextLevel;
            level++;
            experienceToNextLevel += 150;
            cout << "Leveled up! " << level << "!\n";
        }
    }

    void displayStats() const
    {
        cout << "Level: " << level << " | XP: " << experience << "/" << experienceToNextLevel << "\n";
    }

    void levelUp() {
        if (experience >= experienceToNextLevel) {
            cout << "You can level up your hero! " << endl;
            experience -= experienceToNextLevel;
            level++;
            experienceToNextLevel *= 15/100;
        }
    }

    void printClass() {
        cout << "Character: " << char_name << " | Class: ";
        switch (class_type) {
        case WARRIOR: cout << "Warrior"; break;
        case MAGE: cout << "Mage"; break;
        case PALADIN: cout << "Paladin"; break;
        case ASSASIN: cout << "Assasin"; break;
        }
        cout << endl;
    }

    string char_name;
    int strength;
    int dexterity;
    int intelligence;
    int faith;
    int health;
    ClassType class_type;
};


    enum WeaponType{BOW, SHIELD, WAND, SWORD, GRATE_SWORD, DAGGER, CLUB, AXE};

    class Weapon
    {
    private:
        string name;
        int phisycal_damage;
        int magic_damage;
        int fire_damage;
        int bleeding_damage;
        int ligthning_damage;
        int poison_damage;
        int critical_damage;
        int ice_damage;
    public:
        Weapon(string n, WeaponType t, int ph_dmg, int mag_dmg, int f_dmg, int bl_dmg, int li_dmg, int poi_dmg, int cr_dmg, int ic_dmg)
            : name(n), phisycal_damage(ph_dmg), magic_damage(mag_dmg), fire_damage(f_dmg), bleeding_damage(bl_dmg), ligthning_damage(li_dmg), poison_damage(poi_dmg), critical_damage(cr_dmg), ice_damage(ic_dmg) {}

        void displayWeapon()
        {
            
        }

    };



int main()
{
    cout << "What character do you choose?" << endl;
    Character hero1("Arthur", 12, 12, 7, 5, 3, 1, WARRIOR);
    Character hero2("Merlin",6, 4, 6, 15, 10, 1, MAGE);
    Character hero3("Jarvis",8,4,10,17,20,1,PALADIN );
    Character hero4("Robin", 10,10, 15, 8,6,1,ASSASIN);
    hero1.printClass();
    hero2.printClass();
    hero3.printClass();
    hero4.printClass();

    hero1.gainExperience(150);
    hero1.displayStats();

    return 0;
}
