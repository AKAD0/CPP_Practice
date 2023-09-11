#include <iostream>

int main(){
    //array int
    int i, array_int[4] = {1,2,3,4};
    for (i=0; i<4; i++){
        std::cout << array_int[i] << std::endl;
    };
    std::cout << '\n' << std::endl;

    //array str
    std::string array_str[4] = {"first","second","third","fourth"};
    for (i=0; i<4; i++){
        std::cout << array_str[i] << std::endl;
    };
    std::cout << '\n' << std::endl;

    //array

    return 0;
}