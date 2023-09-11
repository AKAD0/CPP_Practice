#include <iostream>

int main(){
    //matrix int
    int i,j, matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (i=0; i<(sizeof matrix / sizeof matrix[0]); i++){
        for(j=0; j<(sizeof matrix[0] / sizeof(int)); j++){
            std::cout << matrix[i][j] << std::endl;
        }
    }
    std::cout << '\n' << std::endl;

    //matrix string
    std::string matrix_str[2][2] = {{"first","second"},{"third","fourth"}};
    for (i=0; i<(sizeof matrix_str / sizeof matrix_str[0]); i++){
        for(j=0; j<(sizeof matrix_str[0] / sizeof(int)); j++){
            std::cout << matrix_str[i][j] << std::endl;
        }
    }

    return 0;
}