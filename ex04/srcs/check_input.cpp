#include "../includes/Replace.hpp"

bool    isValidInput(int ac, char **av){
    if (ac != 4) {
    std::cerr << "Subject says that only three arguments are accepted" << std::endl;
    return false;
    }

    if (!av[2] || !av[3]) {
        std::cerr << "Invalid s1 or s2" << std::endl;
        return false;
    }

    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty() || s2.empty()) {
        std::cout << "Search or Replace string is empty" << std::endl;
        return false;
    }

    return true;
}
 