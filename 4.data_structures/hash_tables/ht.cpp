#include <iostream>

//Definintion of hash function
int hash_function(std::string hash_key, int hash_table_size){
    int i, hash_key_size, hash_val=0;
    hash_key_size = hash_key.size();

    for (i=0; i<hash_key_size; i++){
        hash_val+=hash_key[i];
    }
    hash_val = hash_val%hash_table_size;
    return( hash_val);
};

//Definition of item in hash table
typedef struct Ht_item
{
    std::string* key;
    std::string* value;   
} Ht_item;

//Definition of Hash table itself
typedef struct HashTable
{
    Ht_item** items; //'items' is a pointer to array of pointers where each of them are 'Ht_item' type.
    int size;
    int count;
} HashTable;


int main(){
    //hash function
    int hash_table_size = 10;
    std::string string="hello";
    int hash_key;
    hash_key = hash_function(string, hash_table_size);
    std::cout << hash_key << std::endl;
    return 0;
};