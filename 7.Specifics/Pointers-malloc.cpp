//Memory allocation in pair with pointers allows you to manage dynamic arrays.
//Memory is allocated on 'new' proc or 'malloc' func. It has to be freed after work is done.

#include <iostream>
int main(){
    int a=1; //Both memory allocation and var declaration to address said memory
    int* b; //Solely variable declaration to address to a memory. Needs to be initialized (linked to a memory)

    //--Some ways to init pointer:
    //1st:
    b = &a; //pointer linked to an address of 'a' var.
    std::cout << b << ' ' << *b << std::endl;

    //2nd:
    int arr[4]={1,2,3,4};
    b = &arr[2]; //pointer linked to an address of second element of the array
    std::cout << b << ' ' << *b << std::endl;



    //--Example for 2D arrays with dynamic mem allocation:
    //1. Memory allocation
    int** arr2 = new int*[2];   //var 'arr2' addresses to array (size 2) of pointers and for this array a memory was allocated
    for( int i=0; i<2; i++){    //for each element allocate memory for sub arrays (size 3)
        arr2[i] = new int[3]; 
    }

    //2. Accessing array elements
    arr2[0][0] = 2;
    int var = arr2[0][0];
    std::cout << var << std::endl;

    //3. Clearing memory when done
    for(int i=0; i<2; i++){     //clear memory for each sub arrays
        delete[] arr2[i];
    }
    delete[] arr2;              //clear memory for main array

    return 0;
}