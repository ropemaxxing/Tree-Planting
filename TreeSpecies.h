#ifndef treespec_h
#define treesspec_h
#include <iostream>
#include <iomanip>
#include "TreeStat.h"

using namespace std;

class Oak : public tree
{
private:
  int waternow;
  int watermax;
  int fertnow;
  int fertmax;
  int size;
  int treelevel;

public:
  Oak(int = 0, int = 0,int = 15,int = 0, int = 15, int = 0, int = 1);
  ~Oak();
  void display();
  void show_node()
  {
    Oak::display();
  }
};

Oak::Oak(int v,int w,int x, int y, int z, int data,int lv) : tree(v,w,x,y,z,data,lv)
{
  size = v;
  waternow = w;
  watermax = x;
  fertnow = y;
  fertmax = z;
  treelevel = lv;
}

Oak::~Oak()
{
}

class Pine : public tree
{
private:
  int waternow;
  int watermax;
  int fertnow;
  int fertmax;
  int size;
  int treelevel;

public:
  Pine(int = 0, int = 0,int = 15,int = 0, int = 15, int = 0, int = 1);
  ~Pine();
  void display();
  void show_node()
  {
    Pine::display();
  }
};

class Birch : public tree
{
private:
  int waternow;
  int watermax;
  int fertnow;
  int fertmax;
  int size;
  int treelevel;

public:
  Birch(int = 0, int = 0,int = 15,int = 0, int = 15, int = 0, int = 1);
  ~Birch();
  void display();
  void show_node()
  {
    Birch::display();
  }
};

class Maple : public tree
{
private:
  int waternow;
  int watermax;
  int fertnow;
  int fertmax;
  int size;
  int treelevel;

public:
  Maple(int = 0, int = 0,int = 15,int = 0, int = 15, int = 0, int = 1);
  ~Maple();
  void display();
  void show_node()
  {
    Maple::display();
  }
};

class Palm : public tree
{
private:
  int waternow;
  int watermax;
  int fertnow;
  int fertmax;
  int size;
  int treelevel;

public:
  Palm(int = 0, int = 0,int = 15,int = 0, int = 15, int = 0, int = 1);
  ~Palm();
  void display();
  void show_node()
  {
    Palm::display();
  }
};

class Olive : public tree
{
private:
  int waternow;
  int watermax;
  int fertnow;
  int fertmax;
  int size;
  int treelevel;

public:
  Olive(int = 0, int = 0,int = 15,int = 0, int = 15, int = 0, int = 1);
  ~Olive();
  void display();
  void show_node()
  {
    Olive::display();
  }
};

Pine::Pine(int v,int w,int x, int y, int z, int data,int lv) : tree(v,w,x,y,z,data,lv)
{
}

Pine::~Pine()
{
}

Birch::Birch(int v,int w,int x, int y, int z, int data,int lv) : tree(v,w,x,y,z,data,lv)
{
}

Birch::~Birch()
{
}

Maple::Maple(int v,int w,int x, int y, int z, int data,int lv) : tree(v,w,x,y,z,data,lv)
{
}

Maple::~Maple()
{
}

Palm::Palm(int v,int w,int x, int y, int z, int data,int lv) : tree(v,w,x,y,z,data,lv)
{
}

Palm::~Palm()
{
}

Olive::Olive(int v,int w,int x, int y, int z, int data,int lv) : tree(v,w,x,y,z,data,lv)
{
}

Olive::~Olive()
{
}

void Oak::display()
{
  cout<<"[Info]"<<endl;
  cout << " Species              : Oak" << endl;
  cout << " Science Name         : Quercus spp." << endl;
  cout << " Average Height       : 20 - 40 metres" << endl;
  cout << " Avereage Lifespan    : 200 - 500 years" << endl;
  cout << " Leaf Type            : Dicotyledon" << endl;
  cout << " Wood Hardness        : Very Hard" << endl;
  cout << " Water Requirement    : Medium to High" << endl;
  cout << " Wildlife             : Bird Squiral Fox Deer" << endl;
  cout << " Tree Level           : "<< treelevelstat()<<endl;
  cout << "------------------------------------------------" << endl;
  cout << " [Requirement]"<<endl;
  cout << " Water                : " << waternowstat() << " / " << watermaxstat() << endl;
  cout << " Fertilizer           : " << fertnowstat() << " / " << fertmaxstat() << endl;
}

void Pine::display()
{
  cout<<"[Info]"<<endl;
  cout << " Species              : Pine" << endl;
  cout << " Science Name         : Pinus spp." << endl;
  cout << " Average Height       : 20 - 50 metres" << endl;
  cout << " Avereage Lifespan    : 100 - 300 years" << endl;
  cout << " Leaf Type            : Monocotyledon" << endl;
  cout << " Wood Hardness        : Medium" << endl;
  cout << " Water Requirement    : Low to Medium" << endl;
  cout << " Wildlife             : Bird Squiral Reptile" << endl;
  cout << "------------------------------------------------" << endl;
  cout << " Tree Level           : "<< treelevelstat()<<endl;
  cout << " [Requirement]"<<endl;
  cout << " Water                : " << waternowstat() << " / " << watermaxstat() << endl;
  cout << " Fertilizer           : " << fertnowstat() << " / " << fertmaxstat() << endl;
}

void Birch::display()
{
  cout<<"[Info]"<<endl;
  cout << " Species              : Birch" << endl;
  cout << " Science Name         : Betula spp." << endl;
  cout << " Average Height       : 10 - 25 metres" << endl;
  cout << " Avereage Lifespan    : 30 - 50 years" << endl;
  cout << " Leaf Type            : Monocotyledon" << endl;
  cout << " Wood Hardness        : Medium" << endl;
  cout << " Water Requirement    : High" << endl;
  cout << " Wildlife             : Bird Squiral Rodent" << endl;
  cout << "------------------------------------------------" << endl;
  cout << " Tree Level           : "<< treelevelstat()<<endl;
  cout << " [Requirement]"<<endl;
  cout << " Water                : " << waternowstat() << " / " << watermaxstat() << endl;
  cout << " Fertilizer           : " << fertnowstat() << " / " << fertmaxstat() << endl;
}

void Maple::display()
{
  cout<<"[Info]"<<endl;
  cout << " Species              : Maple" << endl;
  cout << " Science Name         : Acer spp." << endl;
  cout << " Average Height       : 10 - 30 metres" << endl;
  cout << " Avereage Lifespan    : 100 - 200 years" << endl;
  cout << " Leaf Type            : Dicotyledon" << endl;
  cout << " Wood Hardness        : Hard" << endl;
  cout << " Water Requirement    : Medium to High" << endl;
  cout << " Wildlife             : Bird Squiral Rodent" << endl;
  cout<<  "Tree Level            : "<< treelevelstat()<<endl;
  cout << "------------------------------------------------" << endl;
  cout << " Tree Level           : "<< treelevelstat()<<endl;
  cout << " [Requirement]"<<endl;
  cout << " Water                : " << waternowstat() << " / " << watermaxstat() << endl;
  cout << " Fertilizer           : " << fertnowstat() << " / " << fertmaxstat() << endl;
}

void Palm::display()
{
  cout<<"[Info]"<<endl;
  cout << " Species              : Palm" << endl;
  cout << " Science Name         : Arecaceae spp." << endl;
  cout << " Average Height       : 5 - 30 metres" << endl;
  cout << " Avereage Lifespan    : 50 - 100 years" << endl;
  cout << " Leaf Type            : Monocotyledon" << endl;
  cout << " Wood Hardness        : Soft" << endl;
  cout << " Water Requirement    : High" << endl;
  cout << " Wildlife             : Bird Monkey Reptile" << endl;
  cout << "------------------------------------------------" << endl;
  cout << " Tree Level           : "<< treelevelstat()<<endl;
  cout << " [Requirement]"<<endl;
  cout << " Water                : " << waternowstat() << " / " << watermaxstat() << endl;
  cout << " Fertilizer           : " << fertnowstat() << " / " << fertmaxstat() << endl;
}

void Olive::display()
{
  cout<<"[Info]"<<endl;
  cout << " Species              : Olive" << endl;
  cout << " Science Name         : Olea europaea L." << endl;
  cout << " Average Height       : 5 - 15 metres" << endl;
  cout << " Avereage Lifespan    : 150 - 2000 years" << endl;
  cout << " Leaf Type            : Dicotyledon" << endl;
  cout << " Wood Hardness        : Medium" << endl;
  cout << " Water Requirement    : Medium" << endl;
  cout << " Wildlife             : Bird Insect Reptile" << endl;
  cout << "------------------------------------------------" << endl;
  cout << " Tree Level           : "<< treelevelstat()<<endl;
  cout << " [Requirement]"<<endl;
  cout << " Water                : " << waternowstat() << " / " << watermaxstat() << endl;
  cout << " Fertilizer           : " << fertnowstat() << " / " << fertmaxstat() << endl;
}
#endif