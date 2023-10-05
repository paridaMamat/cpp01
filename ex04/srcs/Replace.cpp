#include "../includes/Replace.hpp"

const char    *giveOutputName(std::string av1){
    std::string addName = ".replace";
    av1 += addName;
    return (av1.c_str());
}

std::string Read(std::ifstream &input) {
    // Read the entire content of the input file into a string
    std::string content((std::istreambuf_iterator<char>(input)), (std::istreambuf_iterator<char>()));
    return content;
}

std ::string Replace(std::string buffer, std::string s1, std::string s2){
    
}

void    openReadReplace(char **av)
{
    std::ifstream   input(av[1]);
    if (!input.good()){
        std::cout << "Invalid input File" << std::endl;
        return;
    }
    std::ofstream output(giveOutputName(av[1]));
    if (!output.good()){
        std::cout << "Output creation failed" << std::endl;
        input.close();
        return;
    }
    std::string buffer = Read(input);
    std::string s1 = av[2];
    std::string s2 = av[3];
    output << replace(buffer, s1, s2);
    input.close();
    output.close();
}