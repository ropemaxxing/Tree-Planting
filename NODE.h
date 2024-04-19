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
};

NODE::NODE(int x)
{
      data = x;
      next = NULL;
      cout << "planting at " << x << endl;
}
NODE::~NODE()
{
      cout << "Node " << data << " is being deleted" << endl;
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