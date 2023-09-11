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
    //hash function
    std::string string="helloo";
    int hash_key;
    hash_key = hash_function(string);
    std::cout << hash_key << std::endl;
    return 0;
};