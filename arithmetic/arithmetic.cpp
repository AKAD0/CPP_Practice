#include <iostream>
#include <string>
#include <cmath>

int main() {
    int a, b, c, d;
    float x1, x2;
    
    //Quadratic equation solving:
    //ax^2 + bx + c = 0
    a = 1;
    b = -4;
    c = -5;
    d = b*b-4*a*c;

    if (d<0){
        std::cout << "No roots since D<0." << std::endl;
    }
    else{
        if (d>=0){
            x1 = (-b+sqrt(d))/(2*a);
            x2 = (-b-sqrt(d))/(2*a);
            if (d==0){
                std::cout << "Single root since D=0 is: " << x1 << std::endl;
            }
            else if (d>0){
                std::cout << "Two roots since D=0 are: " << x1 << " and " << x2 << std::endl;
            }
        }
    }

    return 0;
}