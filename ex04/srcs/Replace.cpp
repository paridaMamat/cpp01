#include "../includes/Replace.hpp"

void    openReadReplace(char **av)
{
    //Open the input for reading
    std::ifstream inputFile(av[1]);
    if (!inputFile){
        std::cerr << "Error : Cannot open input file." << std::endl;
        return ;
    }

  // Generate a temporary file name
    char tmpName[] = "fileName";
    if (mktemp(tmpName) == nullptr) {
        std::cerr << "Error: Cannot generate temporary file name." << std::endl;
        return ;
    }

    // Create and open the temporary output file with the generated name
    std::ofstream tempOutputFile(tmpName);
    if (!tempOutputFile) {
        std::cerr << "Error: Cannot create temporary output file." << std::endl;
        return ;
    }

    // Read data from the input file and write it to the temporary output file
    char ch;
    while (inputFile.get(ch)) {
        tempOutputFile.put(ch);
    }

    // Close both the input and temporary output files
    inputFile.close();
    tempOutputFile.close();

    std::cout << "File copied to temporary file: " << tmpFileName << std::endl;
}