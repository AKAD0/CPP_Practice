#include <iostream>
#include <string>
#include <cmath>

int disc(int a, int b, int c) {
    int d;
    d = b*b-4*a*c;
    return(d);
};

void calc(int f_dis, int a, int b) {
    float x1, x2;

    if (f_dis<0){
        std::cout << "No roots since D<0." << std::endl;
    }
    else{
        if (f_dis>=0){
            x1 = (-b+sqrt(f_dis))/(2*a);
            x2 = (-b-sqrt(f_dis))/(2*a);
            if (f_dis==0){
                std::cout << "Single root since D=0 is: " << x1 << std::endl;
            }
            else if (f_dis>0){
                std::cout << "Two roots since D=0 are: " << x1 << " and " << x2 << std::endl;
            }
        }
    }
};

int main() {
    int a, b, c, discriminant;
    
    //Quadratic equation solving:
    //ax^2 + bx + c = 0
    a = 1;
    b = -4;
    c = -5;
    
    discriminant = disc(a,b,c);
    calc(discriminant, a, b);

    return 0;
}