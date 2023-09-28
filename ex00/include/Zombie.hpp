/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:54 by pmaimait          #+#    #+#             */
/*   Updated: 2023/09/27 12:13:46 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie
{
    private : 
    std::string _name;
    
    public :
    Zombie();
    
    Zombie(std::string name);
    ~Zombie(void);
    void    announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
