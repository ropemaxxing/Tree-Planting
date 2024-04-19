#ifndef treespec_h
#define treesspec_h
#include <iostream>
#include <iomanip>
#include "TreeStat.h"

using namespace std;

class Oak : public tree
{
private:
  int minh = 20;
  int maxh = 40;
  int minl = 200;
  int maxl = 500;
  int waternow;
  int watermax;
  int fertnow;
  int fertmax;
  int size;
  string sp = "Oak";
  string sname = "Quercus spp.";
  string le = "Dicotyledon";
  string wo = "Very Hard";
  string wl = "Bird Squiral Fox Deer";
  string wa = "Medium to High";

public:
  Oak(int);
  ~Oak();
  void display();
  void show_node()
  {
    Oak::display();
  }
};

Oak::Oak(int s) : tree(s)
{
}

Oak::~Oak()
{
}

class Pine : public tree
{
private:
  int minh = 20;
  int maxh = 50;
  int minl = 100;
  int maxl = 300;
  int waternow;
  int watermax;
  int fertnow;
  int fertmax;
  int size;
  string sp = "Pine";
  string sname = "Pinus spp.";
  string le = "Monocotyledon";
  string wo = "Medium";
  string wa = "Low to Medium";
  string wl = "Bird Squiral Reptile";

public:
  Pine(int);
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
  int minh = 10;
  int maxh = 25;
  int minl = 30;
  int maxl = 50;
  int waternow;
  int watermax;
  int fertnow;
  int fertmax;
  int size;
  string sp = "Birch";
  string sname = "Betula spp.";
  string le = "Monocotyledon";
  string wo = "Medium";
  string wa = "High";
  string wl = "Bird Squiral Rodent";

public:
  Birch(int);
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
  Maple(int);
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
  int minh = 5;
  int maxh = 30;
  int minl = 50;
  int maxl = 100;
  int waternow;
  int watermax;
  int fertnow;
  int fertmax;
  int size;

  string sp = "Palm";
  string sname = "Arecaceae spp.";
  string le = "Monocotyledon";
  string wo = "Soft";
  string wa = "High";
  string wl = "Bird Monkey Reptile";

public:
  Palm(int);
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
  int minh = 5;
  int maxh = 15;
  int minl = 150;
  int maxl = 2000;
  int waternow;
  int watermax;
  int fertnow;
  int fertmax;
  int size;
  string sp = "Olive";
  string sname = "Olea europaea L.";
  string le = "Dicotyledon";
  string wo = "Medium";
  string wa = "Medium";
  string wl = "Bird Insect Reptile";

public:
  Olive(int);
  ~Olive();
  void display();
  void show_node()
  {
    Olive::display();
  }
};

Pine::Pine(int s) : tree(s)
{
}

Pine::~Pine()
{
}

Birch::Birch(int s) : tree(s)
{
}

Birch::~Birch()
{
}

Maple::Maple(int s) : tree(s)
{
}

Maple::~Maple()
{
}

Palm::Palm(int s) : tree(s)
{
}

Palm::~Palm()
{
}

Olive::Olive(int s) : tree(s)
{
}

Olive::~Olive()
{
}

void Oak::display()
{
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
  cout << "Water                 :" << waternow << " / " << watermax << endl;
  cout << "Fertilizer            :" << fertnow << " / " << fertmax << endl;
}

void Pine::display()
{
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
  cout << "Water                 :" << waternow << " / " << watermax << endl;
  cout << "Fertilizer            :" << fertnow << " / " << fertmax << endl;
}

void Birch::display()
{
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
  cout << "Water                 :" << waternow << " / " << watermax << endl;
  cout << "Fertilizer            :" << fertnow << " / " << fertmax << endl;
}

void Maple::display()
{
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
  cout << "Water                 :" << waternow << " / " << watermax << endl;
  cout << "Fertilizer            :" << fertnow << " / " << fertmax << endl;
}

void Palm::display()
{
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
  cout << "Water                 :" << waternow << " / " << watermax << endl;
  cout << "Fertilizer            :" << fertnow << " / " << fertmax << endl;
}

void Olive::display()
{
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
  cout << "Water                 :" << waternow << " / " << watermax << endl;
  cout << "Fertilizer            :" << fertnow << " / " << fertmax << endl;
}
#endif