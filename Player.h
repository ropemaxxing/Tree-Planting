#ifndef player_h
#define player_h
#include <iostream>
#include <iomanip>
#include "NODE.h"


class player
{
private:
    int water, fert;
public:
    player(int = 0, int = 0);
    void getwater(int);
    void getfert(int);
    void usewater(int);
    void usefert(int);
    void show();
};

player::player(int w, int f)
{
    water = w;
    fert  = f;
}

void player::getwater(int w)
{
    this->water +=w;
}

void player::usewater(int w)
{
    this->water -=w;
}

void player::usefert(int f)
{
    this->fert -=f;
}

void player::getfert(int f)
{
    this->fert +=f;
}

void player::show()
{
    cout << endl
         << "----------------------------------" << endl<<endl;
    cout<<"You have "<<this->water<<" water and "<<this->fert<<" fertilizer(s)"<<endl;

}











#endif