/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:32:27 by pmaimait          #+#    #+#             */
/*   Updated: 2023/09/28 14:06:13 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(){
}

Zombie::Zombie(std::string name) : _name(name){
}

Zombie::~Zombie(){
    std:: cout << _name << " is dead" << std::endl;
}

void Zombie::setName(std::string newName){
    _name = newName;
}

void    Zombie::announce(void){
    std::cout << _name << " : BraiiiiiiinnnzzzZ... " << std::endl;
}