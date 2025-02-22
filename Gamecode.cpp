#include <iostream>
using namespace std;

enum ClassType { WARRIOR, MAGE, PALADIN, ASSASIN};

enum WeaponType { BOW, SHIELD, WAND, SWORD, GRATE_SWORD, DAGGER, CLUB, AXE };

enum HelmetType {LIGHT1, MEDIUM1, HEAVY1, MAGIC1, SHADOW1};

enum ArmorType {LIGHT, MEDIUM, HEAVY, MAGIC, SHADOW};

enum LegginsType{LIGHT2, MEDIUM2, HEAVY2, MAGIC2, SHADOW2};

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

class Helmet
{
public:
    string helmet_name;
    int physical_resistance;
    int magic_resistance;
    int fire_resistance;
    int bleeding_resistance;
    int ligthning_resistance;
    int poison_resistance;
    int ice_resistance;
    HelmetType type;

    Helmet(string name, HelmetType t, int pr, int mr, int fr, int br, int lr, int por, int ir)
        : helmet_name(name), physical_resistance(pr), magic_resistance(mr), fire_resistance(fr), bleeding_resistance(br), ligthning_resistance(lr), poison_resistance(por), ice_resistance(ir), type(t){}

    void displayHelmetStats()
    {
        cout << "Helmet: " << helmet_name << "|Type: ";
        switch (type)
        {
        case LIGHT1: cout << "Light "; break;
        case MEDIUM1: cout << "Medium "; break;
        case HEAVY1: cout << "Heavy "; break;
        case MAGIC1: cout << "Maagic "; break;
        case SHADOW1: cout << "Shadow "; break;
        }
        cout << " | Physical resistance: " << physical_resistance << "\n";
        cout << " | Magic resistance: " << magic_resistance << "\n";
        cout << " | Fire resistance: " << fire_resistance << "\n";
        cout << " | Bleeding resistance: " << bleeding_resistance << "\n";
        cout << " | Lightning resistance: " << ligthning_resistance << "\n";
        cout << " | Poison resistance: " << poison_resistance << "\n";
        cout << " | Ice resistance: " << ice_resistance << "\n";
    }
    void displayStats() const
    {
        cout << "Helmet: " << helmet_name << "\n";
        cout << "Physical resistance: " << physical_resistance << "\n";
        cout << "Magic resistance: " << magic_resistance << "\n";
        cout << "Fire resistance: " << fire_resistance << "\n";
        cout << "Bleeding resistance: " << bleeding_resistance << "\n";
        cout << "Lightning resistance: " << ligthning_resistance << "\n";
        cout << "Poison resistance: " << poison_resistance << "\n";
        cout << "Ice resistance: " << ice_resistance << "\n";
    }
};

class Armor
{
public:
    string armor_name;
    int physical_resistance;
    int magic_resistance;
    int fire_resistance;
    int bleeding_resistance;
    int ligthning_resistance;
    int poison_resistance;
    int ice_resistance;
    ArmorType type;

    Armor(string name, ArmorType t, int pr, int mr, int fr, int br, int lr, int por, int ir)
        : armor_name(name), physical_resistance(pr), magic_resistance(mr), fire_resistance(fr), bleeding_resistance(br), ligthning_resistance(lr), poison_resistance(por), ice_resistance(ir), type(t){}

    void displayArmor()
    {
        cout << "Armor: " << armor_name << "|Type: ";
        switch (type)
        {
        case LIGHT: cout << "Light "; break;
        case MEDIUM: cout << "Medium "; break;
        case HEAVY: cout << "Heavy "; break;
        case MAGIC: cout << "Magic "; break;
        case SHADOW: cout << "Shadow "; break;
        }
    }
    void displayArmorStats() const
    {
        cout << "Armor: " << armor_name << endl;
        cout << "Physical resistance: " << physical_resistance << endl;
        cout << "Magic resistance: " << magic_resistance << endl;
        cout << "Fire resistance: " << fire_resistance << endl;
        cout << "Bleeding resistance: " << bleeding_resistance << endl;
        cout << "Lightning resistance: " << ligthning_resistance << endl;
        cout << "Poison resistance: " << poison_resistance << endl;
        cout << "Ice resistance: " << ice_resistance << endl;
    }
};

    class Leggins
    {
    public:
        string leggins_name;
        int physical_resistance;
        int magic_resistance;
        int fire_resistance;
        int bleeding_resistance;
        int ligthning_resistance;
        int poison_resistance;
        int ice_resistance;
        LegginsType type;

        Leggins(string name,LegginsType t, int pr, int mr, int fr, int br, int lr, int por, int ir)
            :leggins_name(name), physical_resistance(pr), magic_resistance(mr), fire_resistance(fr), bleeding_resistance(br), ligthning_resistance(lr),poison_resistance(por), ice_resistance(ir), type(t){}
        void displayLeggins()
        {
            cout << "Leggins: " << leggins_name << "Type: ";
            switch (type)
            {
                case LIGHT2: cout << "Light "; break;
                case MEDIUM2: cout << "Medium "; break;
                case HEAVY2: cout << "Heavy "; break;
                case MAGIC2: cout << "Magic "; break;
                case SHADOW2: cout << "Shadow "; break;
            }
        }
        void displayLegginsStats() const
        {
            cout << "Leggins: " << leggins_name <<  endl;
            cout << "Physical resistance: " << physical_resistance << endl;
            cout << "Magic resistance: " << magic_resistance << endl;
            cout << "Fire resistance: " << fire_resistance << endl;
            cout << "Bleeding resistance: " << bleeding_resistance << endl;
            cout << "Lightning resistance: " << ligthning_resistance << endl;
            cout << "Poison resistance: " << poison_resistance << endl;
            cout << "Ice resistance: " << ice_resistance << endl;
        }
    };



class Character {
private:
    int level;
    int experience;
    int experienceToNextLevel;
    Weapon* equippedWeapon;
    Helmet* equippedHelmet;
    Armor* equippedArmor;
    Leggins* equippedLeggins;
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
    void equipHelmet(Helmet* helmet)
    {
        equippedHelmet = helmet;
        cout << char_name << "equipped " << helmet->helmet_name << "! " << endl;
        if (equippedHelmet)
        {
            equippedHelmet->displayHelmetStats();
        }
        else
        {
            cout << "No helmet equipped! " << endl;
        }
    }
    void equipArmor(Armor* armor)
    {
        equippedArmor = armor;
        cout << char_name  <<"equipped " << armor->armor_name << "! " << endl;
        if (equippedArmor)
        {
            equippedArmor->displayArmorStats();
        }
        else
        {
            cout << "No armor equipped! " << endl;
        }
    }
    void equipLeggins(Leggins* leggins)
    {
        equippedLeggins = leggins;
        cout << char_name<<"equipped " << leggins->leggins_name << "! " << endl;
        if (equippedLeggins)
        {
            equippedLeggins->displayLegginsStats();
        }
        else
        {
            cout << "No leggins equipped! " << endl;
        }
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
        }
        else
        {
            cout << "No weapon equipped! " << endl;
        }
    }
};



int main()
{
    cout << "What character do you choose?" << endl;

    Character hero1("Arthur(warrior)", 12, 12, 7, 5, 3, 1, WARRIOR);
    Weapon sword("Excalibur", SWORD, 30, 0, 0, 0, 0, 0, 10, 0);
    Helmet warriorHelmet("Warrior's helmet", MEDIUM1, 40, 10, 15, 20, 10, 13, 9);
    Armor warriorArmor("Warrior's armor", HEAVY, 60, 15, 20,30,15,15,20);
    Leggins warriorLeggins("Warrior's leggins", MEDIUM2, 10, 7,9,13,16,12,8);

    Character hero2("Merlin(mage)",6, 4, 6, 15, 10, 1, MAGE);
    Weapon wand("Elder Wand", WAND, 5, 40, 30, 0, 0, 0, 5, 10);
    Helmet mageHat("Mage hat", LIGHT1, 5, 40, 30, 15, 30, 17,25);
    Armor mageDress("Mage Dress", LIGHT, 7,40,30,18,25,19,28);

    Character hero3("Jarvis(paladin)",8,4,10,17,20,1,PALADIN );
    Weapon axe("Battle Axe", AXE, 50, 0, 0, 5, 0, 0, 15, 0);
    Helmet leathersHelmet("Leathers Helmet", MEDIUM1, 30, 10, 10, 20, 12,15,8);
    Armor ironarmor("Iron armor", MEDIUM, 30, 17, 10, 30, 15, 20, 18 );

    Character hero4("Robin(assasin)", 10,10, 15, 8,6,1,ASSASIN);
    Weapon dagger("Shadow Dagger", DAGGER, 25, 5, 0, 10, 0, 0, 20, 0);
    Helmet shadowsHat("Shadow's hat", LIGHT1, 5,15, 10, 9, 10, 20, 13);
    Armor shadowsArmor("Shadow's armor", MEDIUM, 15, 18, 20, 10, 20, 25, 25);



    hero1.equipWeapon(&sword);
    hero2.equipWeapon(&wand);
    hero3.equipWeapon(&axe);
    hero4.equipWeapon(&dagger);

    hero1.equipHelmet(&warriorHelmet);
    hero2.equipHelmet(&mageHat);
    hero3.equipHelmet(&leathersHelmet);
    hero4.equipHelmet(&shadowsHat);

    hero1.equipArmor(&warriorArmor);
    hero2.equipArmor(&mageDress);
    hero3.equipArmor(&ironarmor);
    hero4.equipArmor(&shadowsArmor);

    hero1.equipLeggins(&warriorLeggins);

    hero1.displayCharacter();
    hero2.displayCharacter();
    hero3.displayCharacter();
    hero4.displayCharacter();

    hero1.gainExperience(150);
    hero1.displayStats();

    return 0;
}
