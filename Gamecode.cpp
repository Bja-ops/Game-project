#include <iostream>
using namespace std;

enum ClassType { WARRIOR, MAGE, PALADIN, ASSASIN};

enum WeaponType { BOW, SHIELD, WAND, SWORD, GRATE_SWORD, DAGGER, CLUB, AXE };

class Weapon {
public:
    string name;
    int phisycal_damage;
    int magic_damage;
    int fire_damage;
    int bleeding_damage;
    int ligthning_damage;
    int poison_damage;
    int critical_damage;
    int ice_damage;
    WeaponType type;

    Weapon(string n, WeaponType t, int ph_dmg, int mag_dmg, int f_dmg, int bl_dmg, int li_dmg, int poi_dmg, int cr_dmg, int ic_dmg)
        : name(n), phisycal_damage(ph_dmg), magic_damage(mag_dmg), fire_damage(f_dmg), bleeding_damage(bl_dmg), ligthning_damage(li_dmg), poison_damage(poi_dmg), critical_damage(cr_dmg), ice_damage(ic_dmg), type(t) {}

    void displayWeapon() {
        cout << "Weapon: " << name << " | Type: ";
        switch (type) {
        case BOW: cout << "Bow "; break;
        case SHIELD: cout << "Shield "; break;
        case WAND: cout << "Wand "; break;
        case SWORD: cout << "Sword "; break;
        case GRATE_SWORD: cout << "Grate sword "; break;
        case DAGGER: cout << "Dagger "; break;
        case CLUB: cout << "Club "; break;
        case AXE: cout << "Axe "; break;
        }
        cout << " | Physical damage: " << phisycal_damage << "\n";
        cout << " | Magic damage: " << magic_damage << "\n";
        cout << " | Fire damage: " << fire_damage << "\n";
        cout << " | Bleeding damage: " << bleeding_damage << "\n";
        cout << " | Lightning damage: " << ligthning_damage << "\n";
        cout << " | Poison damage: " << poison_damage << "\n";
        cout << " | Critical damage: " << critical_damage << "\n";
        cout << " | Ice damage: " << ice_damage << "\n";
    }
};

class Character {
private:
    int level;
    int experience;
    int experienceToNextLevel;
    Weapon* equippedWeapon;
public:
    string char_name;
    int strength, dexterity, intelligence, faith, health;
    ClassType class_type;

    Character(string name, int hp, int str, int dex, int intel, int fai, int lvl, ClassType c_type)
        : char_name(name), health(hp), strength(str), dexterity(dex), intelligence(intel), faith(fai), level(lvl), class_type(c_type), experience(0), experienceToNextLevel(100), equippedWeapon(nullptr) {}

    void equipWeapon(Weapon* weapon)
    {
        equippedWeapon = weapon;
        cout << char_name << " equipped " << weapon->name << "! " << endl;
    }

    void gainExperience(int amount) {
        experience += amount;
        cout << "Got: " << amount << " XP!\n";
        checkLevelUp();
    }

    void checkLevelUp()
    {
        while (experience >= experienceToNextLevel)
        {
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

    void displayCharacter()
    {
        cout << "Character: " << char_name << " | Level: " << level << endl;
        if (equippedWeapon)
        {
            equippedWeapon->displayWeapon();
        } else
        {
            cout << "No weapon equipped! " << endl;
        }
    }
};


    class Armor
    {
        
    };

int main()
{
    cout << "What character do you choose?" << endl;
    Character hero1("Arthur", 12, 12, 7, 5, 3, 1, WARRIOR);
    Character hero2("Merlin",6, 4, 6, 15, 10, 1, MAGE);
    Character hero3("Jarvis",8,4,10,17,20,1,PALADIN );
    Character hero4("Robin", 10,10, 15, 8,6,1,ASSASIN);

    Weapon sword("Excalibur", SWORD, 30, 0, 0, 0, 0, 0, 10, 0);
    Weapon wand("Elder Wand", WAND, 5, 40, 0, 0, 0, 0, 5, 10);
    Weapon axe("Battle Axe", AXE, 50, 0, 0, 5, 0, 0, 15, 0);
    Weapon dagger("Shadow Dagger", DAGGER, 25, 5, 0, 10, 0, 0, 20, 0);

    hero1.equipWeapon(&sword);
    hero2.equipWeapon(&wand);
    hero3.equipWeapon(&axe);
    hero4.equipWeapon(&dagger);

    hero1.displayCharacter();
    hero2.displayCharacter();
    hero3.displayCharacter();
    hero4.displayCharacter();

    hero1.gainExperience(150);
    hero1.displayStats();

    return 0;
}
