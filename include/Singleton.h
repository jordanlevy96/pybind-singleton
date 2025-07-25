#pragma once

#include <string>

class Singleton
{
public:
    static Singleton &GetInstance();

    Singleton(Singleton const &) = delete;
    void operator=(Singleton const &) = delete;
    std::string test;

    void Init();
    void PrintTest();

private:
    Singleton() {};
};

// Global singleton instance - shared across all modules
extern Singleton *g_singleton_instance;
extern Singleton *GetGlobalSingleton();