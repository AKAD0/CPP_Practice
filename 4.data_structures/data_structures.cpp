#include <iostream>

int hash_function(std::string hash_key){
    int i, hash_key_size, hash_table_size, hash_val=0;
    hash_key_size = hash_key.size();
    hash_table_size = 10;

    for (i=0; i<hash_key_size; i++){
        hash_val+=hash_key[i];
    }
    hash_val = hash_val%hash_table_size;
    return( hash_val);
};

int main(){
    //--array int
    int i, array_int[4] = {1,2,3,4};
    for (i=0; i<4; i++){
        std::cout << array_int[i] << std::endl;
    };
    std::cout << '\n' << std::endl;

    //--array str
    std::string array_str[4] = {"first","second","third","fourth"};
    for (i=0; i<4; i++){
        std::cout << array_str[i] << std::endl;
    };
    std::cout << '\n' << std::endl;

    //--hash table
    //hash functions
    std::string string="helloo";
    int hash_key;
    hash_key = hash_function(string);
    std::cout << hash_key << std::endl;


    return 0;
}