/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:47 by pmaimait          #+#    #+#             */
/*   Updated: 2023/10/11 15:43:06 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie :: Zombie(){    
}

Zombie :: Zombie(std::string name) : _name(name){  
}

Zombie:: ~Zombie(){
    std::cout << _name << " is deleted" << std:: endl;
}

void    Zombie::announce(void){
    std::cout << _name << ": BraiiiiiiinnnzzzZ... " << std:: endl;
}
