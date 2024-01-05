# Pybind Singleton

## The Problem

A singleton is defined in C++. I want to expose it to Python. Different ways of binding the Singleton all indicate that Python is creating a new instance for itself, not using the one initialized by C++.

## Building and Running

This is a CMake project. CMake creates two modules, "my_lib" and "my_module", that are linked to the main executable. Build all three by running

```sh
mkdir build
cd build
cmake ..
make
```

Be sure to run the executable `./pybind-singleton` from the build directory, as there are some relative filepaths hardcoded in.
