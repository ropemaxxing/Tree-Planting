
#ifndef treestat_h
#define treestat_h
#include <iostream>
#include <iomanip>
#include "NODE.h"

using namespace std;

class tree : public NODE
{
    int ty, minh, maxh, minl, maxl, size;
    int watermax = 10;
    int waternow;
    string sname, le, wo, wl, sp, wa;

public:
    tree(int);
    ~tree();
    virtual void display();
    virtual void show_node()
    {
        // tree::display();
        // cout << "You have plant " << ty << " and now it's " << size << "Meter(s)";
        // NODE::show_node();
    }
};

tree::tree(int y) : NODE(y)
{
}

tree::~tree()
{
    cout << "How can you be this bad." << endl
         << "You just cut number " << sp << " without hesitation" << endl;
}

void tree::display()
{
    cout << " Water                 :" << waternow << " / " << watermax << endl;
    cout << " Fertilizer            :" << waternow << " / " << watermax << endl;
    cout << " Data Number          : " << ty << endl;
    cout << " Height               : " << size << endl;
    cout << " Species              : " << sp << endl;
    cout << " Science Name         : " << sname << endl;
    cout << " Average Height       : " << minh << " - " << maxh << " metres" << endl;
    cout << " Avereage Lifespan    : " << minl << " - " << maxl << " years" << endl;
    cout << " Leaf Type            : " << le << endl;
    cout << " Wood Hardness        : " << wo << endl;
    cout << " Water Requirement    : " << wa << endl;
    cout << " Wildlife             : " << wl << endl;
    cout << "------------------------------------------------" << endl;
}
#endif