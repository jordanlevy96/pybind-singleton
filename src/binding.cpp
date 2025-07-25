#include <pybind11/pybind11.h>

#include "Singleton.h"

namespace py = pybind11;

PYBIND11_MODULE(my_module, m)
{
    py::class_<Singleton>(m, "Singleton")
        .def_static(
            "print_test", []()
            { Singleton::GetInstance().PrintTest(); })
        .def_static(
            "get_test_val", []()
            { return Singleton::GetInstance().test; })
        .def_static(
            "set_test_val", [](std::string val)
            { Singleton::GetInstance().test = val; })
        .def_static(
            "get_instance", &Singleton::GetInstance, py::return_value_policy::reference);
}
