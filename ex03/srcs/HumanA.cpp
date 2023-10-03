#include "../includes/HumanA.hpp"

HumanA::HumanA(std:: string newname,  Weapon &newWeapon):_name(newname), _weapon(newWeapon){

}

void    HumanA::attack()
{
    std::cout << _name << " attacks with thier " << _weapon.getType() << std::endl;
}