#ifndef WEAPON
#define WEAPON

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
    private:
    
    std::string _type;

    public:

    Weapon(std::string type);

    const   std::string& getType();
    void    setType(std::string newtype);
};

#endif