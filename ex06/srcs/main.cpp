#include"../includes/Harl.hpp"

int main(int ac, char **av)
{
    Harl    harl;

    if (ac != 2){
        std::cout << "You have to tell me your level" << std::endl;
        return (1);
    }
    std::string level = av[1];
    harl.complain(level);
    return(0);
}