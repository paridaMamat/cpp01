/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:21:22 by pmaimait          #+#    #+#             */
/*   Updated: 2023/10/11 15:01:13 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *Ashley = new Zombie[N];
    std::string new_name;
    
    for (int i = 0; i < N; i++)
    {
        std::stringstream ss;
        ss << name << (i + 1);
        new_name = ss.str();
        Ashley[i].setName(new_name);
    }
    return Ashley;
}





