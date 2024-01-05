#include "Singleton.h"

#include <iostream>

void Singleton::Init()
{
    test = "C++'s instance";
}

void Singleton::PrintTest()
{
    std::cout << __FILE__ << ": " << __LINE__ << std::endl;
    std::cout << test << std::endl;
}
