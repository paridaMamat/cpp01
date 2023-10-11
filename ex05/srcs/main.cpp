#include"../includes/Harl.hpp"

int main(void)
{
    Harl    harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    std::cout << "\ndon't woory there is also some another level of Harl" << std::endl;
    harl.complain("OTHER");
    return(0);
}