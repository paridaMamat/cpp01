/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:40 by pmaimait          #+#    #+#             */
/*   Updated: 2023/09/26 15:02:51 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* newZombie(std::string name)
{
    try
    {
        Zombie *zombie = new Zombie(name);
        return (zombie);
    }
    catch(const std::bad_alloc&)
    {
        std::cerr << "Allocation failed" << std::endl;
        return (NULL);
    }
    
}