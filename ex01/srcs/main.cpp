/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:53:14 by pmaimait          #+#    #+#             */
/*   Updated: 2023/09/28 14:19:40 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
    Zombie *zombies = zombieHorde(10, "horde");
    for(int i = 0; i < 10; i++)
        zombies[i].announce();
    delete [] zombies;
    return (0);
}