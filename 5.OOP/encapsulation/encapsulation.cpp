#include <iostream>
using namespace std;

class Calculate{
    private:
        int* Mul( int* a){
            int temp = (*a)*(*a);
            int* c = &temp;
            return( c);
        }
    public:
        int* QuadsSum( int* a, int* b){
            int temp = (*Mul(a))+(*Mul(b));
            int* res = &temp;
            return( res);
        };
};

class Item{
    public:
        int* val;
        //Constructor
        Item(){
            this->val = (int*) malloc( sizeof( int));
        };      
        //Destructor
        ~Item(){
            free( this->val);
        };
        
};

int main(){
    Item* item1 = new Item();
    Calculate calc;
    int v1=2;
    int v2=3;
    int* pv1 = &v1;
    int* pv2 = &v2;
    
    item1->val = calc.QuadsSum(pv1,pv2);
    cout << *(item1->val) << endl;
    return 0;
}