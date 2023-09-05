#include <iostream>
#include <string>

int main() {
    int a, b, c, i;

    //For loop
    a = 1;
    b = 2;
    c = 0;
    for (i=0; i<10; i++){
        c += i*(a+b);
    };
    std::cout << "For loop:" << c << std::endl;

    //While loop
    a = 1;
    b = 2;
    c = 0;
    i = 0;
    while (i!=10){
        c += i*(a+b);
        i++;
    }
    std::cout << "While loop:" << c << std::endl;

    //Switch cases
    int n=2;
    switch(n)
    {
    case 1:
        std::cout << "Case 1!" << std::endl;
        break;
    case 2:
        std::cout << "Case 2!" << std::endl;  
        break;
    case 3:
        std::cout << "Case 3!" << std::endl;  
        break;
    }    

    return 0;
}