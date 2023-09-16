#include <iostream>

class Player{
    private:
        std::string* nickname;
        int* player_id;
        int* health;
    public:
        std::string* GetNickname(){
            return this->nickname;
        };
        int* GetPlayerid(){
            return this->player_id;
        };
        int* GetHealth(){
            return this->health;
        };

        void SetNickname( std::string set_nickname){
            this->nickname = &set_nickname;
        };
        void SetPlayerid( int* set_id){
            this->player_id = set_id;
        };
        void SetHealth( int* set_health){
            this->health = set_health;
        };        
};

int main(){
    int id=1;
    int hp=100;
    int* pid=&id;
    int* php=&hp;
    Player* player1 = (Player*) malloc( sizeof( Player));
    player1->SetNickname( (std::string)"Oresuto");
    player1->SetPlayerid( pid);
    player1->SetHealth( php);

//    std::string* name = player1->GetNickname();
//    std::string dename = *name;
//    std::cout<< dename << std::endl;

    std::cout<< *(player1->GetNickname()) << std::endl;
    std::cout<< *(player1->GetPlayerid()) << std::endl;
    std::cout<< *(player1->GetHealth()) << std::endl;

    free( player1);
    return 0;
};