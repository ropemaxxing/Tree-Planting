#ifndef treestat_h
#define treestat_h
#include <iostream>
#include <iomanip>
#include "NODE.h"

using namespace std;

class tree : public NODE
{
    int size;
    int treelevel;
    int watermax;
    int waternow=0;
    int fertmax;
    int fertnow;

public:
    tree(int, int, int, int, int, int,int);
    ~tree();
    virtual void display();
    virtual void show_node()
    {
        // tree::display();
        // cout << "You have plant " << ty << " and now it's " << size << "Meter(s)";
        // NODE::show_node();
    }
    void upgrade();
    int watermaxstat(){
        return watermax;
    };
    int waternowstat(){
        return waternow;
    };
    void addwater(int water){
        //cout<<"Adding "<<water<<endl;
        waternow+=water;
        //cout<<"waternow: "<<waternow<<endl;
    }
    int fertmaxstat(){
        return fertmax;
    };
    int fertnowstat(){
        return fertnow;
    };
    void addfert(int fert){
        //cout<<"Adding "<<fert<<endl;
        fertnow+=fert;
        //cout<<"fertnow: "<<fertnow<<endl;
    }
    int treelevelstat(){
        return treelevel;
    }
    void treelevelup();
    int getlevel();
};

tree::tree(int v, int w, int x, int y, int z, int data,int lv) : NODE(data)
{
    size = v;
    waternow = w;
    watermax = x;
    fertnow = y;
    fertmax = z;
    treelevel = lv;
}

tree::~tree()
{
    cout << "The tree you have planted, it's gone." << endl;
}

void tree::display()
{
    cout << " Water                 : " << waternowstat() << " / " << watermaxstat() << endl;
    cout << " Fertilizer            : " << fertnowstat() << " / " << fertmaxstat() << endl;
    cout << " Height                : " << size << endl;
}


void tree::treelevelup(){
    if(waternowstat()==watermaxstat()&&fertnowstat()==fertmaxstat()){
        treelevel++;
        waternow=0;
        fertnow=0;
        cout<<"[[ Level up! Now the tree is level "<<treelevelstat()<<" ]]"<<endl;
    }
    cout << " [Requirement]"<<endl;
    cout << " Water                : " << waternowstat() << " / " << watermaxstat() << endl;
    cout << " Fertilizer           : " << fertnowstat() << " / " << fertmaxstat() << endl;
}

int tree::getlevel()
{
    return (this->treelevel) ;
}

#endif