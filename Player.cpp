#include <iostream>
#include <string>

#include "Player.h"

void Player::getName(std::string _name){
    std::cout<<"Vous vous nommez :"<< _name <<"."<<std::endl;
    return;
}

/////////////////////////////////////////////////////////////////////////////

void Player::getScore1(int _bestscore1){
    std::cout<<"Votre meilleur score est de :"<< _bestscore1<<"."<< std::endl;
    return;
}

void Player::getScore2(int _bestscore2){
    std::cout<<"Votre meilleur score est de :"<< _bestscore2<<"."<< std::endl;
    return;
}
void Player::getScore3(int _bestscore3){
    std::cout<<"Votre meilleur score est de :"<< _bestscore3<<"."<< std::endl;
    return;
}
void Player::getScore4(int _bestscore4){
    std::cout<<"Votre meilleur score est de :"<< _bestscore4<<"."<< std::endl;
    return;
}

void Player::getScore5(int _bestscore5){
    std::cout<<"Votre meilleur score est de :"<< _bestscore5<<"."<< std::endl;
    return;
}

 //////////////////////////////////////////////////////////////////////////////

void Player:: updateScore1(std::string _name,int _bestscore1, int _newscore1){
    std::cout<<"Entrer votre pseudo :"<<std::endl;
    (_newscore1)==0;
    std::cout<<"Entrer votre nouveau score :";
    cin>> _newscore1;
    if ((_newscore1)>=( _bestscore1 ));
        (_bestscore1) = (_newscore1);
    return;
}

void Player:: updateScore2(std::string _name,int _bestscore2, int _newscore2){
    std::cout<<"Entrer votre pseudo :"<<std::endl;
    (_newscore2)==0;
    std::cout<<"Entrer votre nouveau score :";
    cin>> _newscore1;
    if ((_newscore2)>=( _bestscore2 ));
        (_bestscore2) = (_newscore2);

    return;
}

void Player:: updateScore3(std::string _name,int _bestscore3, int _newscore3){
    std::cout<<"Entrer votre pseudo :"<<std::endl;
    (_newscore3)==0;
    std::cout<<"Entrer votre nouveau score :";
    cin>> _newscore3;
    if ((_newscore3)>=( _bestscore3 ));
        (_bestscore3) = (_newscore3);
    return;
}

void Player:: updateScore4(std::string _name,int _bestscore4, int _newscore4){
    std::cout<<"Entrer votre pseudo :"<<std::endl;
    (_newscore4)==0;
    std::cout<<"Entrer votre nouveau score :";
    cin>> _newscore4;
    if ((_newscore4)>=( _bestscore4 ));
        (_bestscore4) = (_newscore4);
    return;
}

void Player:: updateScore5(std::string _name,int _bestscore5, int _newscore5){
    std::cout<<"Entrer votre pseudo :"<<std::endl;
    (_newscore5)==0;
    std::cout<<"Entrer votre nouveau score :";
    cin>> _newscore5;
    if ((_newscore5)>=( _bestscore5));
        (_bestscore5) = (_newscore5);
    return;
}

/////////////////////////////////////////////////////////////////////////////



