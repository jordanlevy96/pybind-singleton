#pragma once

#include <string>

class Singleton
{
public:
    static Singleton &GetInstance()
    {
        static Singleton instance;
        return instance;
    }

    Singleton(Singleton const &) = delete;
    void operator=(Singleton const &) = delete;
    std::string test;

    void Init();

    void PrintTest();

private:
    Singleton(){};
};
