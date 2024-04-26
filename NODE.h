#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class NODE
{
      int data;
      NODE *next;

public:
      NODE(int data);
      virtual void show_node();
      void insert(NODE *&);
      NODE *move_next();
      virtual ~NODE();
      
      //class tree function
      virtual int watermaxstat()=0;
      virtual int waternowstat()=0;
      virtual void addwater(int)=0;

      virtual int fertmaxstat()=0;
      virtual int fertnowstat()=0;
      virtual void addfert(int)=0;

      virtual void treelevelup()=0;
      virtual int getlevel()=0;
};

NODE::NODE(int x)
{
      data = x;
      next = NULL;
      //cout << "planting at " << x << endl;
}
NODE::~NODE()
{
      //cout << "Node " << data << " is being deleted" << endl;
}
NODE *NODE::move_next()
{
      return next;
}
void NODE::show_node()
{
      cout << "Node data:" << data << endl;
}
void NODE::insert(NODE *&x)
{
      x->next = this;
}

#endif