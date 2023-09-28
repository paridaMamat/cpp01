/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:47 by pmaimait          #+#    #+#             */
/*   Updated: 2023/09/27 12:16:29 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie :: Zombie(){    
}

Zombie :: Zombie(std::string name) : _name(name){  
}

Zombie:: ~Zombie(){
    std::cout << _name << " is dead" << std:: endl;
}

void    Zombie::announce(void){
    std::cout << _name << ": BraiiiiiiinnnzzzZ... " << std:: endl;
}
