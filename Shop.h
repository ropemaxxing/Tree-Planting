#include <iostream>
#include <iomanip>
#include "Player.h"
using namespace std;

void store();
void product();
void buyitem(int);

class product
{
private:
        int ID;

public:
        void purchase(int);
};

class HPpt : public product
{
private:
        int cost;

public:
        HPpt(int = 20){};
};

void store()
{
        int i;
        goods();
        while (1)
        {
                cin >> i;
                buyitem(i);
        }
}

void goods()
{
        cout << "WELCOME TO OUR SHOP,SIR;TAKE YOUR TIME AND MAKE DECISIONS." << endl;
        cout << "**Every time you buy a new weapon, you will lose the old one.**." << endl;
        cout << "-----ITEM-----------------COST---------ITEM-----------------COST" << endl;
        cout << "(01) HP Potion            20G     (02) Stick(+1 ATK)        30G" << endl;
        cout << "(03) Slingshot(+2 ATK)            (04)                              " << endl;
        cout << "(05)                              (06)                              " << endl;
        cout << "(07)                              (08)                              " << endl;
        cout << "(09)                              (10)                              " << endl;
        cout << "(11)                              (12)                              " << endl;
        cout << "-------------------------------------------------------------" << endl;
        cout << "Chooes Item that you want(1-12)" << endl;
}

void buyitem(int i)
{
        cout << "GOLD" << endl;
        if (i = 1)
        {
                HPpt a();
        }
        else if (i = 2)
        {
        }
        else if (i = 3)
        {
        }
        else if (i = 4)
        {
        }
        else if (i = 5)
        {
        }
        else if (i = 6)
        {
        }
        if (gold - a.cost < 0)
                cost << "You don't have enough money."
}