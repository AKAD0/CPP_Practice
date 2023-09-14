#include <iostream>

int print( int* var){
    std::cout << *var << std::endl;
    return 0;
};

int main(){
    int a=1;
    int* b;
    b=&a;
    print(b);
    return 0;
};