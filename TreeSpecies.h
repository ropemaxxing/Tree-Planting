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
  int watermax = 10;
  int waternow = 0;
  string sname = "Quercus spp.";
  string le = "Dicotyledon";
  string wo = "Very Hard";
  string wl = "Bird Squiral Fox Deer";
  string sp = "Oak";
  string wa = "Medium to High";

public:
  Oak(int, int);
  ~Oak();
};

class Pine : public tree
{
private:
  int minh = 20;
  int maxh = 50;
  int minl = 100;
  int maxl = 300;
  string sp = "Pine";
  string sname = "Pinus spp.";
  string le = "Monocotyledon";
  string wo = "Medium";
  string wa = "Low to Medium";
  string wl = "Bird Squiral Reptile";

public:
  Pine(int, int);
  ~Pine();
};

class Birch : public tree
{
private:
  int minh = 10;
  int maxh = 25;
  int minl = 30;
  int maxl = 50;
  string sp = "Birch";
  string sname = "Betula spp.";
  string le = "Monocotyledon";
  string wo = "Medium";
  string wa = "High";
  string wl = "Bird Squiral Rodent";

public:
  Birch(int, int);
  ~Birch();
};

class Maple : public tree
{
private:
  int minh = 10;
  int maxh = 30;
  int minl = 100;
  int maxl = 200;
  string sp = "Maple";
  string sname = "Acer spp.";
  string le = "Dicotyledon";
  string wo = "Hard";
  string wa = "Medium to Hard";
  string wl = "Bird Squiral Rodent";

public:
  Maple(int, int);
  ~Maple();
};

class Palm : public tree
{
private:
  int minh = 5;
  int maxh = 30;
  int minl = 50;
  int maxl = 100;
  string sp = "Palm";
  string sname = "Arecaceae spp.";
  string le = "Monocotyledon";
  string wo = "Soft";
  string wa = "High";
  string wl = "Bird Monkey Reptile";

public:
  Palm(int, int);
  ~Palm();
};

class Olive : public tree
{
private:
  int minh = 5;
  int maxh = 15;
  int minl = 150;
  int maxl = 2000;
  string sp = "Olive";
  string sname = "Olea europaea L.";
  string le = "Dicotyledon";
  string wo = "Medium";
  string wa = "Medium";
  string wl = "Bird Insect Reptile";

public:
  Olive(int, int);
  ~Olive();
};

Oak::Oak(int s, int d) : tree(s, d)
{
}

Oak::~Oak()
{
}

#endif