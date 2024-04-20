#ifndef NODE2_H
#define NODE2_H

#include <iostream>
using namespace std;

class NODE2
{
        int data;
        NODE2 *next;

public:
        NODE2(int data = 0);
        virtual void show_node();
        void insert(NODE2 *&);
        NODE2 *move_next();
        virtual ~NODE2();
};

NODE2::NODE2(int x)
{
        data = x;
        next = NULL;
        // cout<<"planting at "<<x<<endl;
}
NODE2::~NODE2()
{
        cout << "Node " << data << " is being deleted" << endl;
}
NODE2 *NODE2::move_next()
{
        return next;
}
void NODE2::show_node()
{
        cout << "Node data:" << data << endl;
}
void NODE2::insert(NODE2 *&x)
{
        x->next = this;
}

#endif