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
  int level;

public:
  Oak(int = 0, int = 0,int = 15,int = 0, int = 15, int = 0);
  ~Oak();
  void display();
  void show_node()
  {
    Oak::display();
  }
};

Oak::Oak(int v,int w,int x, int y, int z, int data) : tree(v,w,x,y,z,data)
{

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

public:
  Pine(int = 0, int = 0,int = 15,int = 0, int = 15, int = 0);
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

public:
  Birch(int = 0, int = 0,int = 15,int = 0, int = 15, int = 0);
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
  int minh = 10;
  int maxh = 30;
  int minl = 100;
  int maxl = 200;
  int waternow;
  int watermax;
  int fertnow;
  int fertmax;
  int size;
  string sp = "Maple";
  string sname = "Acer spp.";
  string le = "Dicotyledon";
  string wo = "Hard";
  string wa = "Medium to Hard";
  string wl = "Bird Squiral Rodent";

public:
  Maple(int = 0, int = 0,int = 15,int = 0, int = 15, int = 0);
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

public:
  Palm(int = 0, int = 0,int = 15,int = 0, int = 15, int = 0);
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

public:
  Olive(int = 0, int = 0,int = 15,int = 0, int = 15, int = 0);
  ~Olive();
  void display();
  void show_node()
  {
    Olive::display();
  }
};

Pine::Pine(int v,int w,int x, int y, int z, int data) : tree(v,w,x,y,z,data)
{
}

Pine::~Pine()
{
}

Birch::Birch(int v,int w,int x, int y, int z, int data) : tree(v,w,x,y,z,data)
{
}

Birch::~Birch()
{
}

Maple::Maple(int v,int w,int x, int y, int z, int data) : tree(v,w,x,y,z,data)
{
}

Maple::~Maple()
{
}

Palm::Palm(int v,int w,int x, int y, int z, int data) : tree(v,w,x,y,z,data)
{
}

Palm::~Palm()
{
}

Olive::Olive(int v,int w,int x, int y, int z, int data) : tree(v,w,x,y,z,data)
{
}

Olive::~Olive()
{
}

void Oak::display()
{
  cout << " Height               : " << size << endl;
  cout << " Species              : Oak" << endl;
  cout << " Science Name         : Quercus spp." << endl;
  cout << " Average Height       : 20 - 40 metres" << endl;
  cout << " Avereage Lifespan    : 200 - 500 years" << endl;
  cout << " Leaf Type            : Dicotyledon" << endl;
  cout << " Wood Hardness        : Very Hard" << endl;
  cout << " Water Requirement    : Medium to High" << endl;
  cout << " Wildlife             : Bird Squiral Fox Deer" << endl;
  cout << "------------------------------------------------" << endl;
  cout << "Water                 :" << waternow << " / " << watermax << endl;
  cout << "Fertilizer            :" << fertnow << " / " << fertmax << endl;
}

void Pine::display()
{
  cout << " Height               : " << size << endl;
  cout << " Species              : Pine" << endl;
  cout << " Science Name         : Pinus spp." << endl;
  cout << " Average Height       : 20 - 50 metres" << endl;
  cout << " Avereage Lifespan    : 100 - 300 years" << endl;
  cout << " Leaf Type            : Monocotyledon" << endl;
  cout << " Wood Hardness        : Medium" << endl;
  cout << " Water Requirement    : Low to Medium" << endl;
  cout << " Wildlife             : Bird Squiral Reptile" << endl;
  cout << "------------------------------------------------" << endl;
  cout << "Water                 :" << waternow << " / " << watermax << endl;
  cout << "Fertilizer            :" << fertnow << " / " << fertmax << endl;
}

void Birch::display()
{
  cout << " Height               : " << size << endl;
  cout << " Species              : Birch" << endl;
  cout << " Science Name         : Betula spp." << endl;
  cout << " Average Height       : 10 - 25 metres" << endl;
  cout << " Avereage Lifespan    : 30 - 50 years" << endl;
  cout << " Leaf Type            : Monocotyledon" << endl;
  cout << " Wood Hardness        : Medium" << endl;
  cout << " Water Requirement    : High" << endl;
  cout << " Wildlife             : Bird Squiral Rodent" << endl;
  cout << "------------------------------------------------" << endl;
  cout << "Water                 :" << waternow << " / " << watermax << endl;
  cout << "Fertilizer            :" << fertnow << " / " << fertmax << endl;
}

void Maple::display()
{
  cout << " Height               : " << size << endl;
  cout << " Species              : Maple" << endl;
  cout << " Science Name         : Acer spp." << endl;
  cout << " Average Height       : 10 - 30 metres" << endl;
  cout << " Avereage Lifespan    : 100 - 200 years" << endl;
  cout << " Leaf Type            : Dicotyledon" << endl;
  cout << " Wood Hardness        : Hard" << endl;
  cout << " Water Requirement    : Medium to Hard" << endl;
  cout << " Wildlife             : Bird Squiral Rodent" << endl;
  cout << "------------------------------------------------" << endl;
  cout << "Water                 :" << waternow << " / " << watermax << endl;
  cout << "Fertilizer            :" << fertnow << " / " << fertmax << endl;
}

void Palm::display()
{
  cout << " Height               : " << size << endl;
  cout << " Species              : Palm" << endl;
  cout << " Science Name         : Arecaceae spp." << endl;
  cout << " Average Height       : 5 - 30 metres" << endl;
  cout << " Avereage Lifespan    : 50 - 100 years" << endl;
  cout << " Leaf Type            : Monocotyledon" << endl;
  cout << " Wood Hardness        : Soft" << endl;
  cout << " Water Requirement    : High" << endl;
  cout << " Wildlife             : Bird Monkey Reptile" << endl;
  cout << "------------------------------------------------" << endl;
  cout << "Water                 :" << waternow << " / " << watermax << endl;
  cout << "Fertilizer            :" << fertnow << " / " << fertmax << endl;
}

void Olive::display()
{
  cout << " Height               : " << size << endl;
  cout << " Species              : Olive" << endl;
  cout << " Science Name         : Olea europaea L." << endl;
  cout << " Average Height       : 5 - 15 metres" << endl;
  cout << " Avereage Lifespan    : 150 - 2000 years" << endl;
  cout << " Leaf Type            : Dicotyledon" << endl;
  cout << " Wood Hardness        : Medium" << endl;
  cout << " Water Requirement    : Medium" << endl;
  cout << " Wildlife             : Bird Insect Reptile" << endl;
  cout << "------------------------------------------------" << endl;
  cout << "Water                 :" << waternow << " / " << watermax << endl;
  cout << "Fertilizer            :" << fertnow << " / " << fertmax << endl;
}
#endif