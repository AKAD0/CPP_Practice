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
        void Ultimate(){
            cout << "<blank ultimate>" << endl;
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
            cout << "Get up!" << endl;
        };
        void Ultimate(){
            cout << "Heroes never die!" << endl;
        };
};

class BlancHero: public Character{
    public:
        //Constructor
        BlancHero(int id, int health): Character(id, health){
            this->health = (int*) malloc( sizeof( int));
            SetHealth(health);
        };      
        //Destructor
        ~BlancHero(){
            free( this->health);
        };
};

int main(){
    Mercy* mercy1 = new Mercy(1, 200);
    cout << *(mercy1->GetHealth()) << endl;
    mercy1->Revive();
    mercy1->Ultimate();

    BlancHero* blanchero1 = new BlancHero(2, 150);
    blanchero1->Ultimate();
    return 0;
};