#include <string>

class Player{
    
    private:
    std::string _name;
    int _bestscore1;
    int _bestscore2;
    int _bestscore3;
    int _bestscore4;
    int _bestscore5;

    int _newscore1;
    int _newscore2;
    int _newscore3;
    int _newscore4;
    int _newscore5;


    public:
    void getName(std::string _name);
    void getScore(int _bestscore1);
    void getScore(int _bestscore2);
    void getScore(int _bestscore3);
    void getScore(int _bestscore4);
    void getScore(int _bestscore5);
    void updateScore1(int _bestscore1,int _bestscore2,int _bestscore3,int _bestscore4,int _bestscore5, int _newscore1);


    Player(std::string _name, int _bestscore);

};