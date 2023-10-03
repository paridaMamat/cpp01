
#ifndef REPLACE
#define REPLACE
#include <iostream>
#include <fstream>

class Replace
{
    private :

    std::string _s1;
    std::string _s2;

    public :

    Replace();
    Replace(std::string s1, std::string s2);

    void FindAndReplace(std::string s1, std::string s2);

};

#endif