#include <pybind11/pybind11.h>

#include "Singleton.h"

namespace py = pybind11;

PYBIND11_MODULE(my_module, m)
{
    py::class_<Singleton>(m, "Singleton")
        .def_static(
            "print_test", []()
            { Singleton::GetInstance().PrintTest(); },
            py::return_value_policy::reference)
        .def_static(
            "get_test_val", []()
            { 
                Singleton &singleton = Singleton::GetInstance();
                return singleton.test; },
            py::return_value_policy::reference)
        .def_static(
            "get_instance", &Singleton::GetInstance, py::return_value_policy::reference)
        .def_readwrite("test", &Singleton::test);
}
