#include"../includes/Harl.hpp"
Harl::Harl()
{}
Harl ::~Harl()
{}

void    Harl::complain(std::string  level){
    std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*harlArray[4])();
    harlArray[0] = &Harl::debug;
    harlArray[1] = &Harl::info;
    harlArray[2] = &Harl::warning;
    harlArray[3] = &Harl::error;

    for (int n = 0;n < 4; n++){
        if (array[n] == level)
        {
            (this->*harlArray[n])();
            return;
        }
    }
    std::cout << "[OTHER]\nmaybe i confused something else with the price of bacon, i am verry sorry, good job and good day " <<std::endl;

}
void    Harl::debug(void){
    std ::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do! " << std::endl;
}

void    Harl::info(void){
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"  << std::endl;
}

void    Harl::warning(void){
    std::cout <<  "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void){
    std ::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
