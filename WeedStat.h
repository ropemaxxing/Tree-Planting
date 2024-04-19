#ifndef weed_h
#define weed_h
#include <iostream>
#include <iomanip>

using namespace std;

class weed{
private:
    string name;
    int hp=10,number;
public:
    weed(string = "Weed", int = 10);

};

weed::weed(string a, int b)
{
    name    =   a;
    hp      =   b;
    cout<<name<<"has spawned"<<endl;
}

#endif