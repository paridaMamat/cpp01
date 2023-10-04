#include "../includes/Replace.hpp"

bool    isValidInput(int ac, char **av){
    if (ac != 4) {
    std::cerr << "Subject says that only three argument can accept";
    return (false);
   }
   if (!av[2]){
    std::cerr << "Invalid s1" << std::endl;
    return (false);
   }
   return(true);
}
 