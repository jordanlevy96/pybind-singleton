#include "Singleton.h"

#include <pybind11/pybind11.h>
#include <pybind11/embed.h>

#include <iostream>

namespace py = pybind11;

int main()
{
    std::cout << "Instancing Singleton..." << std::endl;
    Singleton &s = Singleton::GetInstance();
    s.PrintTest();
    s.Init();
    s.PrintTest();
    std::cout << "------------" << std::endl;

    std::cout << "Running init.py" << std::endl;
    py::scoped_interpreter guard = py::scoped_interpreter();
    py::eval_file("../init.py");

    return 0;
}