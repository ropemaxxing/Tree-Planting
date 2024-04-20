
#ifndef treestat_h
#define treestat_h
#include <iostream>
#include <iomanip>
#include "NODE.h"

using namespace std;

class tree : public NODE
{
    int size;
    int watermax;
    int waternow;
    int fertmax;
    int fertnow;

public:
    tree(int, int, int, int, int, int);
    ~tree();
    virtual void display();
    virtual void show_node()
    {
        // tree::display();
        // cout << "You have plant " << ty << " and now it's " << size << "Meter(s)";
        // NODE::show_node();
    }
};

tree::tree(int v, int w, int x, int y, int z, int data) : NODE(data)
{
    size = v;
    waternow = w;
    watermax = x;
    fertnow = y;
    fertmax = z;
}

tree::~tree()
{
    cout << "How can you be this bad." << endl
         << "You just cut tree without hesitation" << endl;
}

void tree::display()
{
    cout << " Water                 :" << waternow << " / " << watermax << endl;
    cout << " Fertilizer            :" << waternow << " / " << watermax << endl;
    cout << " Height               : " << size << endl;
}
#endif