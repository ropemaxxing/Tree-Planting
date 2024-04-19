#ifndef treespec_h
#define treesspec_h
#include <iostream>
#include <iomanip>
#include "TreeStat.h"

using namespace std;


class Oak:public tree{
private:
  int minh = 20,maxh = 40,minl = 200,maxl = 500,watermax=10,waternow=0;
  string sname = "Quercus spp.",le = "Dicotyledon",wo = "Very Hard",wl = "Bird Squiral Fox Deer",sp = "Oak",wa = "Medium to High";
public:
  Oak(int, int);
  ~Oak();
};

class Pine:public tree{
private:
  int minh,maxh,minl,maxl;
  string sname,le,wo,wl,sp,wa;
public:
  Pine(int, int);
  ~Pine();
};

class Birch:public tree{
private:
  int minh,maxh,minl,maxl;
  string sname,le,wo,wl,sp,wa;
public:
  Birch(int, int);
  ~Birch();
};

class Maple:public tree{
private:
  int minh,maxh,minl,maxl;
  string sname,le,wo,wl,sp,wa;
public:
  Maple(int, int);
  ~Maple();
};

class Palm:public tree{
private:
  int minh,maxh,minl,maxl;
  string sname,le,wo,wl,sp,wa;
public:
  Palm(int, int);
  ~Palm();
};

class Olive:public tree{
private:
  int minh,maxh,minl,maxl;
  string sname,le,wo,wl,sp,wa;
public:
  Olive(int, int);
  ~Olive();
};

Oak::Oak(int s, int d):tree(s,d)
{

}

Oak::~Oak()
{

}

#endif