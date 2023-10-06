#include "../includes/Replace.hpp"

const char    *giveOutputName(std::string av1){
    std::string addName = ".replace";
    av1 += addName;
    const char *a = av1.c_str();
    return (a);
}

std::string Read(std::ifstream &input) {
    std::string content((std::istreambuf_iterator<char>(input)), (std::istreambuf_iterator<char>()));
    return content;
}

std::string replace(std::string buffer, const std::string& s1, const std::string& s2) {
    size_t start = 0;
    size_t found = buffer.find(s1);

    while (found != std::string::npos) {
        buffer = buffer.substr(0, found) + s2 + buffer.substr(found + s1.length());
        start = found + s2.length();
        found = buffer.find(s1, start);
    }
    return buffer;
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

