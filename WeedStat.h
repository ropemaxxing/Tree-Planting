#ifndef weed_h
#define weed_h
#include <iostream>
#include <iomanip>
#include "NODE2.h"


using namespace std;

class weed:public NODE2{
private:
    string name;
    int number;
    weed* next;
public:
    weed(string = "Weed", int = 10);
    ~weed();
    weed*& move_next();
    int hp = rand()%10;
    void set_weed_hp(int x){
        hp = x;
    }
};

weed::weed(string a, int b)
{
    name    =   a;
    hp      =   b;
    //cout<<name<<" has spawned"<<endl;
}


weed*& weed::move_next(){
    return next;
}

weed::~weed()
{

}



#endif