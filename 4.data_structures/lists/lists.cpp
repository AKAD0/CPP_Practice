#include <iostream>

typedef struct list{
        int item;
        struct list* next;
    } list;

list* create_list_element( list* prev_elem, int var){
    list* elem;
    elem = new list;
    elem->item = var;
    elem->next = NULL;
    if( prev_elem != NULL){
        prev_elem->next = elem;
    };
    return elem;
}

int print_list_element( list* list_ref){
    std::cout << "Element( var:" << list_ref->item << "; next:" << list_ref->next << ")" << std::endl;
    return 0;
};

int print_list_forward( list* list_ref){
    while( true){
        std::cout << list_ref->item << std::endl;
        if( list_ref->next != NULL){
            list_ref = list_ref->next;
        }
        else{ break;};
    };
    return 0;
}

int delete_list_element( list* prev_elem, list* elem){
    prev_elem->next = elem->next;
    delete[] elem;
    return 0;
};

int main(){
    list* elem1 = create_list_element( NULL, 1);
    list* elem2 = create_list_element( elem1, 2);
    list* elem3 = create_list_element( elem2, 3);

    std::cout << "print single elem:" << std::endl;
    print_list_element( elem1);
    std::cout << '\n' << std::endl;

    std::cout << "print list forward:" << std::endl;
    print_list_forward( elem1);
    std::cout << '\n' << std::endl;

    std::cout << "delete 2nd elem:" << std::endl;
    delete_list_element( elem1, elem2);
    print_list_forward( elem1);
};