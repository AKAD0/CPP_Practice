//Basic overview of classes. Constructor, Destructor.

#include <iostream>

class Player{
    private:
        int* player_id;
        int* health;
    public:
        int* GetPlayerid(){
            return this->player_id;
        };
        int* GetHealth(){
            return this->health;
        };

        void SetPlayerid( int set_id){
            *this->player_id = set_id;
        };
        void SetHealth( int set_health){
            *this->health = set_health;
        };  

        //Both could be described because of polymorphism( overload)
        //Constructor ver.1 (Requires additional init of fields)
        Player(){
            this->player_id = (int*) malloc( sizeof( int));
            this->health = (int*) malloc( sizeof( int));
        };

        //Constructor ver.2. (Inits fields with given params)
        Player(int id, int health){
            this->player_id = (int*) malloc( sizeof( int));
            this->health = (int*) malloc( sizeof( int));
            SetPlayerid(id);
            SetHealth(health);
        };      

        //Destructor
        ~Player(){
            free( this->player_id);
            free( this->health);
        }
};

int main(){
    //Init using the Constructor ver.2:
    //Player* player1 = new Player(1, 100);

    //Init using the Constructor ver.1:
    Player* player1 = new Player();
    player1->SetPlayerid( (int)01);
    player1->SetHealth( (int)100);

    std::cout<< *(player1->GetPlayerid()) << std::endl;
    std::cout<< *(player1->GetHealth()) << std::endl;

    free( player1);
    return 0;
};