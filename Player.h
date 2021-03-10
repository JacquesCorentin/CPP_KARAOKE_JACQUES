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

    void getScore1(int _bestscore1);
    void getScore2(int _bestscore2);
    void getScore3(int _bestscore3);
    void getScore4(int _bestscore4);
    void getScore5(int _bestscore5);

    void updateScore1(std::string _name,int _bestscore1, int _newscore1);
    void updateScore2(std::string _name,int _bestscore1, int _newscore1);
    void updateScore3(std::string _name,int _bestscore1, int _newscore1);
    void updateScore4(std::string _name,int _bestscore1, int _newscore1);
    void updateScore5(std::string _name,int _bestscore1, int _newscore1);



    Player(std::string _name, int _bestscore);

};