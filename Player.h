#ifndef player_h
#define player_h
#include <iostream>
#include <iomanip>
#include "TreeStat.h"

class player
{
private:
    int water, fert, BASEATK;

public:
    player(int = 0, int = 0, int = 0);
    void getwater(int);
    int wateramount(){return water;}
    void getfert(int);
    int fertamount(){return fert;}
    void usewater(int);
    void usefert(int);
    void show();
    void baseatkchange(int);
    int getbaseatk();

};

player::player(int w, int f, int A)
{
    water = w;
    fert = f;
    BASEATK = A;
}

void player::getwater(int w)
{
    this->water += w;
}

void player::usewater(int w)
{
    this->water -= w;
}

void player::usefert(int f)
{
    this->fert -= f;
}

void player::getfert(int f)
{
    this->fert += f;
}

void player::baseatkchange(int a)
{
    this->BASEATK = a;
}

int player::getbaseatk()
{
    return this->BASEATK;
}

void player::show()
{
    cout << "-----------------------" << endl;
    cout << "INVENTORY" << endl;
    cout << "-----------------------" << endl;
    cout << "water        : " << this->water << endl;
    cout << "fertilizer   : " << this->fert << endl;
    cout << "-----------------------" << endl;
    cout << "STAT" << endl;
    cout << "-----------------------" << endl;
    cout << "ATK          : " << this->BASEATK << endl;
    cout << "-----------------------" << endl;
}

#endif