#include <iostream>
#include "NODE.h"

using namespace std;

class LL{
      NODE*hol;
      int size;
public:
      void add_node(NODE*&);
      virtual void show_all();
    
      virtual ~LL();
      LL();
      
};

LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++)
     {
      t=t->move_next();
      delete hol;
      hol=t;
     }
     size = 0;
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++)
     {
     t->show_node();
     t=t->move_next();
     }
}
void LL::add_node(NODE *&A){

          hol->insert(A);
          hol=A;

       size++;

 }