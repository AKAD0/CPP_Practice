#include <iostream>
#define CAPACITY 10 // Size of the HashTable.

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
int hash_function(std::string* hash_key){
    int hash_val, hash_key_size, i=0;
    std::string hash_key_de;
    hash_key_de = *hash_key;
    hash_key_size = hash_key_de.size();

    for (i=0; i<hash_key_size; i++){
        hash_val+=hash_key_de[i];
    };

    return( hash_val%CAPACITY);
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
    return item;
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
    free( item->key);
    free( item->value);
    free( item);
};

//Defining procedure that deletes (frees memory) of Hash table
void free_table(HashTable* table){
    for ( int i=0; i<table->size; i++){
        Ht_item* item = table->items[i];
        if (item!=NULL){
            free( item);
        };
    };

    free( table->items);
    free( table);
};

//Defining procedure that prints Hash table
void print_table( HashTable* table){
    std::cout << "\nHash Table\n---------------" << std::endl;
    
    for ( int i=0; i<table->size; i++){
        if ( table->items[i]){
            printf("Index:%d, Key:%s, Value:%s", i, table->items[i], table->items[i]->value);
        };
    };

    std::cout << "\n------------------------" << std::endl;
};

//Defining procedure that inserts new element
void ht_insert( HashTable* table, std::string* key, std::string* value){
    Ht_item* item = create_item( key, value);
    int index = hash_function( key);

    //check if there already is an item with the same hash val
    Ht_item* current_item = table->items[index];
    //if there ISN'T then insert if the table isn't full
    if (current_item == NULL){
        if( table->count == table->size){
            std::cout << "Insert Error: Hash table is full\n" << std::endl;
            free_item( item);
            return;
        }
        else{
            table->items[index] = item;
            table->count++;
        };
    }
    //if there IS then update or collision
    else{
        //Update if keys are equal
        if (current_item->key == key){
            table->items[index]->value = value;
            return;
        }
        //Call collision if not equal
        else{
            std::cout << "Collision! Current implementation of structure doesn't support handling collisions. Abort." << std::endl;
            free_item( item);
            return;
        }
    };
    return;
};

//Defining procedures for searching for element
std::string* ht_search( HashTable* table, std::string* key){
    int index = hash_function( key);
    Ht_item* item = table->items[index];

    if (item != NULL){
        if( item->key==key){
            return item->value;
        }
    }
    else{
        return NULL;
    };
};
void print_search( HashTable* table, std::string* key){
    std::string* val;
    val = ht_search( table, key);

    if ( val == NULL){
        printf("Key:%s doesn't exist.", key);
        return;
    }
    else{
        printf("Key:%s, Value:%s", key, val);
    };
}

//Defining procedure for deleting element
void ht_delete( HashTable* table, std::string* key){
    //code
};

//!!! There's also should be a code to handle collisiion on insertion.

int main(){
    HashTable* ht = create_table( 10);
    ht_insert(ht, (std::string*)"First", (std::string*)"First item");
    ht_insert(ht, (std::string*)"Second", (std::string*)"Second item");
    print_search(ht, (std::string*)"First");
    print_search(ht, (std::string*)"Second");
    print_table(ht);
    free_table(ht);

    return 0;
};