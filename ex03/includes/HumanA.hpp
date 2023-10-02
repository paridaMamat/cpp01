#ifndef HUMANA
#define HUMANA


#include "Weapon.hpp"


class HumanA
{
    private :

    std::string _name;
    Weapon &_weapon;
    
    public :

    HumanA(std::string newName, Weapon &newWeapon);

    void    attack();
};

#endif