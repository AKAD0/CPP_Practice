//Basic overview of classes. Constructor, Destructor.

#include <iostream>

class Player{
    private:
        int* player_id;
        int* health;
    public:
        //Constructor
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
};

int main(){
    Player* player1 = new Player(1, 100);

    std::cout<< *(player1->GetPlayerid()) << std::endl;
    std::cout<< *(player1->GetHealth()) << std::endl;

    free( player1);
    return 0;
};