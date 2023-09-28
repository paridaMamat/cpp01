/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <pmaimait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:37:44 by pmaimait          #+#    #+#             */
/*   Updated: 2023/09/28 15:06:37 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string BRAIN = "HI THIS IS BRAIN";
    std::string *stringPTR = &BRAIN;
    std::string &stringREF = BRAIN;
    
    std::cout << "BRAIN's Address is : " << &BRAIN << std::endl;
    std::cout << "stringPTR's Address is : " << stringPTR << std::endl;
    std::cout << "stringREF's Address is : " << &stringREF << std::endl << std::endl;
    std::cout << "The value of string BRAIN is : " << BRAIN << std::endl;
    std::cout << "The value pointed to by stringPTR is : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF is : " << stringREF << std::endl;
    return 0;
    
}