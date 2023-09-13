#include <iostream>

//Defining structure of item of Hash table
typedef struct Ht_item
{
    std::string* key;
    std::string* value;   
} Ht_item;

//Defining structure of Hash table itself
typedef struct HashTable
{
    Ht_item** items; //'items' is a pointer to array of pointers where each of them are 'Ht_item' type.
    int size;
    int count;
} HashTable;

//Defining hash function
int hash_function(std::string hash_key, int hash_table_size){
    int i, hash_key_size, hash_val=0;
    hash_key_size = hash_key.size();

    for (i=0; i<hash_key_size; i++){
        hash_val+=hash_key[i];
    }
    hash_val = hash_val%hash_table_size;
    return( hash_val);
};

//Defining function that creates item of Hash table
Ht_item* create_item( std::string* key, std::string* value){
    //malloc for every field with appropriate size
    Ht_item* item = (Ht_item*) malloc( sizeof( Ht_item)); //defining pointer 'item' to 'Ht_item' //and malloc for it of type 'Ht_item*' and of size 'sizeof( Ht_item)'
    item->key = (std::string*) malloc( (*key).size()+1); 
    item->value = (std::string*) malloc( (*value).size()+1);

    //copy given params to allocated memory
    item->key = key;
    item->value = value;
};

//Defining function that creates Hash table itself
HashTable* create_table( int size){
    //malloc
    HashTable* table = (HashTable*) malloc( sizeof( HashTable));
    table->size = size;
    table->count = 0;
    table->items = (Ht_item**) calloc( table->size, sizeof( Ht_item**)); //malloc but with given number of elements, each of them initialized as 0

    //reinitialize elements as NULL
    for ( int i=0; i<table->size; i++){
        table->items[i]=NULL;
    };
    return table;
};

//Defining procedure that deletes (frees memory) of item of Hash table
void free_item(Ht_item* item){
    //code
};

//Defining procedure that deletes (frees memory) of Hash table
void free_table(HashTable* table){
    //code
};

//Defining procedure that prints Hash table
void print_table( HashTable* table){
    //code
};

//Defining procedure that inserts new element
void ht_insert( HashTable* table, std::string* key, std::string* value){
    //code
};

//Defining procedure for searching for element
void ht_search( HashTable* table, std::string* key){
    //code
};

//Defining procedure for deleting element
void ht_delete( HashTable* table, std::string* key){
    //code
};

//!!! There's also should be a code to handle collisiion on insertion.

int main(){
    //hash function
    int hash_table_size = 10;
    std::string string="hello";
    int hash_key;
    hash_key = hash_function(string, hash_table_size);
    std::cout << hash_key << std::endl;
    return 0;
};