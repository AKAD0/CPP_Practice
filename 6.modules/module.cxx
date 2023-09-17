//Building app includes following:
//1. Compiling both modules and main program via:
//   'g++ -c -std=c++20 -fmodules-ts module.cxx' and
//   'g++ -c -std=c++20 -fmodules-ts main.cpp'
//2. Linking resulting .o (object) files and buidling app via:
//   'g++ main.o module.o -o App'

// module.cxx
module;

#include <iostream>

export module mod;

export void func() {
    std::cout << "hello, world!\n" <<std::endl;
}