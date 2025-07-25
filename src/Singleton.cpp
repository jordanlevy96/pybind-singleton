#include "Singleton.h"
#include <iostream>

// Global singleton instance - shared across all modules
Singleton *g_singleton_instance = nullptr;

Singleton &Singleton::GetInstance()
{
    if (!g_singleton_instance)
    {
        g_singleton_instance = new Singleton();
    }
    return *g_singleton_instance;
}

void Singleton::Init()
{
    test = "C++'s instance";
}

void Singleton::PrintTest()
{
    std::cout << __FILE__ << ": " << __LINE__ << std::endl;
    std::cout << test << std::endl;
}

Singleton *GetGlobalSingleton()
{
    return &Singleton::GetInstance();
}