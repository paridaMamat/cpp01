
#include "../includes/Replace.hpp"

int main(int ac, char **av){
    if (!isValidInput(ac, av))
        exit(1);
    openReadReplace(av);
    return (0);
}