/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:04:09 by pmaimait          #+#    #+#             */
/*   Updated: 2023/09/28 14:04:08 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie 
{
   private :

   std::string _name;
   
   public :
   
   Zombie();
   
   Zombie(std::string name);
   ~Zombie(void);

   void announce(void);
   void setName(std::string newName);
};

Zombie* zombieHorde(int N, std::string name);
#endif
