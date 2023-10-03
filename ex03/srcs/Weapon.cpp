#include "../includes/Weapon.hpp"

Weapon ::Weapon(std::string type) : _type(type){
}

const std::string&  Weapon::getType(){
    return(_type);
}

void    Weapon::setType(std::string  newType){
    if (newType == "")
        return ;
    _type = newType;
}