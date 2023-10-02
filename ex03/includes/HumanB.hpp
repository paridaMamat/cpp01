#ifndef HUMANB
#define HUMANB

#include "Weapon.hpp"

class HumanB
{
    private:
    std::string _name;
    Weapon *_weapon;

    public:
    HumanB(std::string name);
    HumanB(std::string name, Weapon &weapon);

    void attack();
    void setWeapon(Weapon &newWeappon);
};

#endif