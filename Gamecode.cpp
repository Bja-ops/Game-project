#include <iostream>
using namespace std;

enum ClassType { WARRIOR, MAGE, PALADIN, ASSASIN};

enum WeaponType { BOW, SHIELD, WAND, SWORD, GRATE_SWORD, DAGGER, CLUB, AXE };

enum ShieldType {LIGHT3, MEDIUM3, HEAVY3, MAGIC3, SHADOW3};

enum HelmetType { LIGHT1, MEDIUM1, HEAVY1, MAGIC1, SHADOW1};

enum ArmorType { LIGHT, MEDIUM, HEAVY, MAGIC, SHADOW};

enum LegginsType { LIGHT2, MEDIUM2, HEAVY2, MAGIC2, SHADOW2};

enum BootsType {LIGHT4, MEDIUM4, HEAVY4, MAGIC4, SHADOW4};

enum EnemyType {COMMON, ELDER, WAR_LORD, TITAN, ANCIENT, LEVIATHAN};



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
        default: cout << "Unknown "; break;
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

class Shield
{
public:
    string shield_name;
    int physical_resistance;
    int magic_resistance;
    int fire_resistance;
    int bleeding_resistance;
    int ligthning_resistance;
    int poison_resistance;
    int ice_resistance;
    ShieldType type;

    Shield(string name, ShieldType t, int pr, int mr, int fr, int br, int lr, int por, int ir)
        : shield_name(name), physical_resistance(pr), magic_resistance(mr), fire_resistance(fr), bleeding_resistance(br), ligthning_resistance(lr), poison_resistance(por), ice_resistance(ir), type(t) {}

    void displayShieldStats()
    {
        cout << "Shield: " << shield_name <<"| Type: ";
        switch (type)
        {
            case LIGHT3: cout << "Light "; break;
            case MEDIUM3: cout << "Medium "; break;
            case HEAVY3: cout << "Heavy "; break;
            case MAGIC3: cout << "Magic "; break;
            case SHADOW3: cout << "Shadow "; break;
        default: cout << "Unknown "; break;
        }
        cout << " | Physical resistance: " << physical_resistance << "\n";
        cout << "| Magic resistance: " << magic_resistance << "\n";
        cout << "| Fire resistance: " << fire_resistance << "\n";
        cout << "| Bleeding resistance: " << bleeding_resistance << "\n";
        cout << "| Lightning resistance: " << ligthning_resistance << "\n";
        cout << "| Poison resistance: " << poison_resistance << "\n";
        cout << "| Ice resistance: " << ice_resistance << "\n";
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
        case MAGIC1: cout << "Magic "; break;
        case SHADOW1: cout << "Shadow "; break;
        default: cout << "Unknown "; break;
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
        cout << "| Helmet: " << helmet_name << "\n";
        cout << "| Physical resistance: " << physical_resistance << "\n";
        cout << "| Magic resistance: " << magic_resistance << "\n";
        cout << "| Fire resistance: " << fire_resistance << "\n";
        cout << "| Bleeding resistance: " << bleeding_resistance << "\n";
        cout << "| Lightning resistance: " << ligthning_resistance << "\n";
        cout << "| Poison resistance: " << poison_resistance << "\n";
        cout << "| Ice resistance: " << ice_resistance << "\n";
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
        default: cout << "Unknown "; break;
        }
        cout << "| Armor: " << armor_name << "\n";
        cout << "| Physical resistance: " << physical_resistance << "\n";
        cout << "| Magic resistance: " << magic_resistance << "\n";
        cout << "| Fire resistance: " << fire_resistance << "\n";
        cout << "| Bleeding resistance: " << bleeding_resistance << "\n";
        cout << "| Lightning resistance: " << ligthning_resistance << "\n";
        cout << "| Poison resistance: " << poison_resistance << "\n";
        cout << "| Ice resistance: " << ice_resistance << "\n";
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
            cout << "Leggins: " << leggins_name << " | Type: ";

            switch (type)
            {
            case LIGHT2: cout << "Light"; break;
            case MEDIUM2: cout << "Medium"; break;
            case HEAVY2: cout << "Heavy"; break;
            case MAGIC2: cout << "Magic"; break;
            case SHADOW2: cout << "Shadow"; break;
            default: cout << "UNKNOWN"; break;
            }

            cout << " | Physical resistance: " << physical_resistance << "\n";
            cout << "| Magic resistance: " << magic_resistance << "\n";
            cout << "| Fire resistance: " << fire_resistance << "\n";
            cout << "| Bleeding resistance: " << bleeding_resistance << "\n";
            cout << "| Lightning resistance: " << ligthning_resistance << "\n";
            cout << "| Poison resistance: " << poison_resistance << "\n";
            cout << "| Ice resistance: " << ice_resistance << "\n";
        }
    };


class Boots
{
public:
    string boots_name;
    int physical_resistance;
    int magic_resistance;
    int fire_resistance;
    int bleeding_resistance;
    int ligthning_resistance;
    int poison_resistance;
    int ice_resistance;
    BootsType type;

    Boots(string name,BootsType t, int pr, int mr, int fr, int br, int lr, int por, int ir)
        :boots_name(name), physical_resistance(pr), magic_resistance(mr), fire_resistance(fr), bleeding_resistance(br), ligthning_resistance(lr), poison_resistance(por), ice_resistance(ir), type(t){}

    void displayBoots()
    {
        cout << "Boots: " << boots_name << " | Type: ";
        switch (type)
        {
        case LIGHT4: cout << "Light"; break;
        case MEDIUM4: cout << "Medium"; break;
        case HEAVY4: cout << "Heavy"; break;
        case MAGIC4: cout << "Magic"; break;
        case SHADOW4: cout << "Shadow"; break;
        default: cout << "UNKNOWN"; break;
        }
        cout << " | Physical resistance: " << physical_resistance << "\n";
        cout << "| Magic resistance: " << magic_resistance << "\n";
        cout << "| Fire resistance: " << fire_resistance << "\n";
        cout << "| Bleeding resistance: " << bleeding_resistance << "\n";
        cout << "| Lightning resistance: " << ligthning_resistance << "\n";
        cout << "| Poison resistance: " << poison_resistance << "\n";
        cout << "| Ice resistance: " << ice_resistance << "\n";
    }
};



class Character {
private:
    int level;
    int experience;
    int experienceToNextLevel;
    Weapon* equippedWeapon;
    Shield* equippedShield;
    Helmet* equippedHelmet;
    Armor* equippedArmor;
    Leggins* equippedLeggins;
    Boots* equippedBoots;
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
        if (equippedWeapon)
        {
            equippedWeapon-> displayWeapon();
        }
        else
        {
            cout << "No weapon equipped! " << endl;
        }
    }
    void equipShield(Shield* shield)
    {
        equippedShield = shield;
        cout << char_name << "equipped " << shield->shield_name << "! " << endl;
        if (equippedShield)
        {
            equippedShield->displayShieldStats();
        }
        else
        {
            cout << "No shield equipped! " << endl;
        }
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
            equippedArmor->displayArmor();
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
            equippedLeggins->displayLeggins();
        }
        else
        {
            cout << "No leggins equipped! " << endl;
        }
    }
    void equipBoots(Boots* boots)
    {
        equippedBoots = boots;
        cout << char_name << "equipped " << boots->boots_name << "! " << endl;
        if (equippedBoots)
        {
            equippedBoots->displayBoots();
        }
        else
        {
            cout << "No boots equipped! " << endl;
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
            if (level < 10)
            {
                experienceToNextLevel *= 1.2; // Początkowe levele są łatwiejsze
            }
            else if (level < 20)
            {
                experienceToNextLevel *= 1.5; // Poziomy 10-20 trudniejsze
            }
            else if (level < 50)
            {
                experienceToNextLevel *= 2.0; // Skokowe zwiększenie wymagań
            }
            else
            {
                experienceToNextLevel *= 2.5; // Endgame – bardzo wysokie wymagania
            }

            experienceToNextLevel = static_cast<int>(experienceToNextLevel); // Zaokrąglamy do liczby całkowitej

            cout << "Leveled up! Now level " << level << "!\n";
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


class Enemy
{
public:
    string enemy_name;
    int level;
    int health;
    int physical_damage;
    int magic_damage;
    int fire_damage;
    int bleeding_damage;
    int lightning_damage;
    int poison_damage;
    int ice_damage;
    Weapon* weapon;
    Leggins* leggins;
    Boots* boots;
    int experience;
    EnemyType type;

    Enemy(string name, EnemyType t, int lvl, int hp, int pd, int md, int fd, int bd, int ld, int pod, int id)
        : enemy_name(name), level(lvl), health(hp), physical_damage(pd), magic_damage(md), fire_damage(fd), bleeding_damage(bd), lightning_damage(ld),poison_damage(pod) ,ice_damage(pod), type(t) {}

    void displayEnemy()
    {
        cout << enemy_name << "| Type: ";
        switch (type)
        {
        case COMMON: cout << "Common "; break;
        case ELDER: cout << "Elder "; break;
        case WAR_LORD: cout << "War lord "; break;
        case TITAN: cout << "Titan "; break;
        case ANCIENT: cout << "Ancient "; break;
        case LEVIATHAN: cout << "Leviathan "; break;
        default: cout << "Unknown "; break;
        }
        cout << "Level: " << level << "\n";
        cout << "Health: " << health << "\n";
        cout << "Physical Damage: " << physical_damage << "\n";
        cout << "Magic Damage: " << magic_damage << "\n";
        cout << "Fire Damage: " << fire_damage << "\n";
        cout << "Bleeding Damage: " << bleeding_damage << "\n";
        cout << "Lightning Damage: " << lightning_damage << "\n";
        cout << "Poison Damage: " << poison_damage << "\n";
        cout << "Ice Damage: " << ice_damage << "\n";
    }
};



int main()
{
    cout << "What character do you choose?" << endl;

    Character hero1("Arthur(warrior)", 12, 12, 7, 5, 3, 1, WARRIOR);
    Weapon sword("Excalibur", SWORD, 30, 0, 0, 0, 0, 0, 10, 0);
    Shield leatherShield("Leather shield",MEDIUM3,20, 10, 15, 0,8,5,4);
    Helmet warriorHelmet("Warrior's helmet", MEDIUM1, 40, 10, 15, 20, 10, 13, 9);
    Armor warriorArmor("Warrior's armor", HEAVY, 60, 15, 20,30,15,15,20);
    Leggins warriorLeggins("Warrior's leggins", MEDIUM2, 10, 7,9,13,16,12,8);
    Boots warriorBoots("Warrior's name", MEDIUM4,6, 5, 3, 7, 8, 10, 5);

    Character hero2("Merlin(mage)",6, 4, 6, 15, 10, 1, MAGE);
    Weapon wand("Elder Wand", WAND, 5, 40, 30, 0, 0, 0, 5, 10);
    Shield magicStone("Magic stone", LIGHT3,5,40,30,0,25,10,20);
    Helmet mageHat("Mage hat", LIGHT1, 5, 40, 30, 15, 30, 17,25);
    Armor mageDress("Mage Dress", LIGHT, 7,60,45,18,25,19,28);
    Leggins mageLeggins("Mage leggins", LIGHT2, 3,25,17,13,20,19,20);
    Boots mageBoots("Mage boots", LIGHT4, 5, 20, 10, 7, 14, 12, 15);

    Character hero3("Jarvis(paladin)",8,4,10,17,20,1,PALADIN );
    Weapon axe("Battle Axe", AXE, 50, 0, 0, 5, 0, 0, 15, 0);
    Shield ironShield("Iron shield", HEAVY3, 25, 13, 6, 0,5,10,8);
    Helmet leathersHelmet("Leathers Helmet", MEDIUM1, 30, 10, 10, 20, 12,15,8);
    Armor ironArmor("Iron armor", MEDIUM, 30, 17, 20, 30, 15, 20, 18 );
    Leggins ironLeggins("Iron leggins", HEAVY2,20,13,8,15,7,17,13);
    Boots leatherBoots("Leather boots", MEDIUM4, 15, 10, 5, 10, 4, 12, 6);

    Character hero4("Robin(assasin)", 10,10, 15, 8,6,1,ASSASIN);
    Weapon dagger("Shadow Dagger", DAGGER, 25, 5, 0, 10, 0, 0, 20, 0);
    Shield shadowsShield("Shadow's shield", LIGHT3, 5,10,7,0,15,8,13);
    Helmet shadowsHat("Shadow's mask", LIGHT1, 5,15, 10, 9, 10, 20, 13);
    Armor shadowsArmor("Shadow's armor", MEDIUM, 15, 18, 20, 10, 20, 25, 25);
    Leggins shadowsLeggins("Shadow's leggins", MEDIUM2, 15, 10, 25, 15, 17, 8, 9);
    Boots shadowsBoots("Shadow's boots", MEDIUM4, 8, 5, 10, 12, 13, 9, 7);


    Enemy Wolf("Wolf", COMMON, 1, 7, 6,0,0,8,0,0,0);
    Enemy Rabbit("Rabbit", COMMON, 1, 4,4,0,0,7,0,0,0);
    Enemy Bear("Bear", COMMON,1,10,8,0,0,13,0,0,0);
    Enemy Tiger("Tiger", COMMON, 1,7,7,0,0,11,0,0,0);
    Enemy Lion("Lion", COMMON, 1,8,7,0,0,12,0,0,0);
    Enemy Snake("Snake", COMMON, 1,3,4,0,0,3,0,9,0);
    Enemy Spider("Spider", COMMON,1,3,4,0,0,5,0,12,0);
    Enemy Shark("Shark", COMMON, 1, 6,7,0,0,14,0,0,0);
    Enemy Goblin("Goblin", COMMON, 1, 5,6,5,0,4,0,0,0);
    Enemy Dark_goblin("Dark goblin", COMMON, 1,10,8,9,7,3,4,4,0);
    Enemy Knight("Knight", COMMON, 1,5,7,0,0,8,0,0,0);
    Enemy Dark_knight("Dark knight", COMMON, 1,10,9,7,4,6,3,0,0);
    Enemy Ogre("Ogre", COMMON, 1,7,7,0,0,0,0,5,4);
    Enemy Orc("Ork", COMMON, 1,8,9,4,3,5,4,1,0);

    Enemy Angel("Angel", ELDER, 14,18,24,27,0,0,15,0,0);
    Enemy Demon("Demon", ELDER, 14,19,20,14,28,14,9,0,0);
    Enemy Devil("Devil", ELDER, 16,15,14,16,28,0,0,0,0);
    Enemy Dark_angel("Dark angel", ELDER, 15,18,14,26,29,18,20,0,0);

    hero1.equipWeapon(&sword);
    hero2.equipWeapon(&wand);
    hero3.equipWeapon(&axe);
    hero4.equipWeapon(&dagger);

    hero1.equipShield(&leatherShield);
    hero2.equipShield(&magicStone);
    hero3.equipShield(&ironShield);
    hero4.equipShield(&shadowsShield);

    hero1.equipHelmet(&warriorHelmet);
    hero2.equipHelmet(&mageHat);
    hero3.equipHelmet(&leathersHelmet);
    hero4.equipHelmet(&shadowsHat);

    hero1.equipArmor(&warriorArmor);
    hero2.equipArmor(&mageDress);
    hero3.equipArmor(&ironArmor);
    hero4.equipArmor(&shadowsArmor);

    hero1.equipLeggins(&warriorLeggins);
    hero2.equipLeggins(&mageLeggins);
    hero3.equipLeggins(&mageLeggins);
    hero4.equipLeggins(&shadowsLeggins);

    hero1.equipBoots(&warriorBoots);
    hero2.equipBoots(&mageBoots);
    hero3.equipBoots(&leatherBoots);
    hero4.equipBoots(&shadowsBoots);

    hero1.displayCharacter();
    hero2.displayCharacter();
    hero3.displayCharacter();
    hero4.displayCharacter();

    hero1.gainExperience(10000);
    hero1.displayStats();

    return 0;
}
