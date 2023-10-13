
#include "../includes/HumanB.hpp"


HumanB :: HumanB(std::string name) :_name(name), _weapon(nullptr) {

}
HumanB :: HumanB(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon){

}
void HumanB :: attack()
{
    if (weapon)
        std::cout << _name << " attack with thier " << _weapon->getType() << std::endl;
    else
       std::cout << _name << " attack with nothing " << std::endl;

}

void    HumanB :: setWeapon(Weapon &newWeapon){
    _weapon = &newWeapon;
}
