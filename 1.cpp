#include <iostream>

void print_pointer( int* var){
    std::cout << var << std::endl;
};

void print_dereference( int* var){
    std::cout << *var << std::endl;
};

int main(){
    int a=1;
    int* b;
    b=&a;
    print_pointer(b);
    print_dereference(b);
    return 0;
};