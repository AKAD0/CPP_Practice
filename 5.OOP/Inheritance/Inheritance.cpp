//Inheritance: Public, Protected, Private.
//Private is accessible to class instance only
//Protected is accessible to class instance and it's inheritors
//Public is accessible to everyone

#include <iostream>
using namespace std;

class Character{
    protected:
        int* health;
    public:
        //Constructor
        Character(int id, int health){
            this->health = (int*) malloc( sizeof( int));
            SetHealth(health);
        };      
        //Destructor
        ~Character(){
            free( this->health);
        };

        int* GetHealth(){
            return this->health;
        };
        void SetHealth( int set_health){
            *this->health = set_health;
        };  

};

class Mercy: public Character{
    public:
        //Constructor
        Mercy(int id, int health): Character(id, health){
            this->health = (int*) malloc( sizeof( int));
            SetHealth(health);
        };      
        //Destructor
        ~Mercy(){
            free( this->health);
        };

        void Revive(){
            cout << "Heroes never die!" << endl;
        };
};

int main(){
    Mercy* mercy1 = new Mercy(1, 200);
    cout << *(mercy1->GetHealth()) << endl;
    mercy1->Revive();
    return 0;
};