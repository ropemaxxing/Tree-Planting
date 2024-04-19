
#ifndef treestat_h
#define treestat_h
#include <iostream>
#include <iomanip>
#include "NODE.h"

using namespace std;

class tree:public NODE{
    int ty,minh,maxh,minl,maxl,size;
    string sname,le,wo,wl,sp,wa;
public:
    tree(int,int);
    ~tree();
    void display();
    void show_node(){
        cout<<"You have plant "<<ty<<" and now it's "<<size<<"Meter(s)";
        NODE::show_node();
    }

};

tree::tree(int x,int y):NODE(y)
{
    ty = x;
    if(x==1)
    {
        sp = "Oak";
        sname = "Quercus spp.";
        minh = 20;  // ความสูงเฉลี่ยต้น
        maxh = 40;  // ความสูงเฉลี่ยปลาย
        minl = 200; // อายุเฉลี่ยต้น
        maxl = 500; // อายุเฉลี่ยปลาย
        le = "Dicotyledon"; //ใบเลี้ยง
        wo = "Very Hard";   //ความแข็งเนื้อไม้
        wa = "Medium to High"; //ปริมาณน้ำที่ต้องการ
        wl = "Bird Squiral Fox Deer"; //สิง่มีชีวิตที่พบ

    } else
    if(x==2)
    {
        sp = "Pine";
        sname = "";
        minh = 20;
        maxh = 50;
        minl = 100;
        maxl = 300;
        le = "Monocotyledon";
        wo = "Medium";
        wa = "Low to Medium";
        wl = "Bird Squiral Reptile";
    } else
    if(x==3)
    {
        sp = "Birch";
        sname = "Betula spp.";
        minh = 10;
        maxh = 25;
        minl = 30;
        maxl = 50;
        le = "Monocotyledon";
        wo = "Medium";
        wa = "High";
        wl = "Bird Squiral Rodent";

    } else
    if(x==4)
    {
        sp = "Maple";
        sname = "Acer spp.";
        minh = 10;
        maxh = 30;
        minl = 100;
        maxl = 200;
        le = "Dicotyledon";
        wo = "Hard";
        wa = "Medium to Hard";
        wl = "Bird Squiral Rodent";

    } else
    if(x==5)
    {
        sp = "Palm";
        sname = "Arecaceae spp.";
        minh = 5;
        maxh = 30;
        minl = 50;
        maxl = 100;
        le = "Monocotyledon";
        wo = "Soft";
        wa = "High";
        wl = "Bird Monkey Reptile";

    } else
    if(x==6)
    {
        sp = "Olive";
        sname = "Olea europaea L.";
        minh = 5;
        maxh = 15;
        minl = 150;
        maxl = 2000;
        le = "Dicotyledon";
        wo = "Medium";
        wa = "Medium";
        wl = "Bird Insect Reptile";

    }

}

tree::~tree()
{
    cout<<"How can you be this bad."<<endl<<"You just cut number "<<sp<<" without hesitation"<<endl;
}

void tree::display()
{
    cout<<" Data Number          : "<<ty<<endl;
    cout<<" Height               : "<<size<<endl;
    cout<<" Species              : "<<sp<<endl;
    cout<<" Science Name         : "<<sname<<endl;
    cout<<" Average Height       : "<<minh<<" - "<<maxh<<" metres"<<endl;
    cout<<" Avereage Lifespan    : "<<minl<<" - "<<maxl<<" years"<<endl;
    cout<<" Leaves               : "<<le<<endl;
    cout<<" Wood                 : "<<wo<<endl;
    cout<<" Water Level Required : "<<wa<<endl;
    cout<<" Wildlife             : "<<wl<<endl;
}
#endif