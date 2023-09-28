/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:35 by pmaimait          #+#    #+#             */
/*   Updated: 2023/09/27 11:54:33 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("Jerry");

    zombie->announce();
    randomChump("TOM");
    delete zombie;
    return (0);
}