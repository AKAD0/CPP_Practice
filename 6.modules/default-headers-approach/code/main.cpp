//Building app includes following:
//1. Compiling both modules and main program via:
//   'g++ -c module.cpp' and
//   'g++ -c main.cpp'
//2. Linking resulting .o (object) files and buidling app via:
//   'g++ main.o module.o -o App'

#include "../headers/main.h"

int main(){
    int a=1, b=2;
    std::cout << a+b << ' ' << Summ(1,2) << std::endl;
    return 0;
}