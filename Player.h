#ifndef player_h
#define player_h
#include <iostream>
#include <iomanip>
#include "TreeStat.h"

class player
{
private:
    int water, fert, gold, BASEATK, mana;

public:
    player(int = 0, int = 0, int = 0, int = 0, int = 40);
    void getwater(int);
    int wateramount(){return water;}
    void getfert(int);
    int fertamount(){return fert;}
    void usewater(int);
    void usefert(int);
    void goldchange(int);
    void show();
    void manachange(int);
    void baseatkchange(int);
    int getbaseatk();

};

player::player(int w, int f, int g, int A, int m)
{
    water = w;
    fert = f;
    gold = g;
    BASEATK = A;
    mana = m;
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

void player::goldchange(int g)
{
    this->gold += g;
}

void player::manachange(int m)
{
    this->mana += m;
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
    cout << "golds        : " << this->gold << endl;
    cout << "HP potion    : " << endl;
    cout << "-----------------------" << endl;
    cout << "STAT" << endl;
    cout << "-----------------------" << endl;
    cout << "ATK          : " << this->BASEATK << endl;
}

#endif