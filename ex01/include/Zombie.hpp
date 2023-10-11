/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:04:09 by pmaimait          #+#    #+#             */
/*   Updated: 2023/10/11 15:04:26 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <sstream>
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
