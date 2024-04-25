#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include "Combat.h"
#include "TreeSpecies.h"
#include "LL.h"
#include "WeedStat.h"
#include "Player.h"
#include <limits>

using namespace std;

void watering(player *, NODE *);
void puttingfert(player *, NODE *);
void start(int);
void Rule();
void cutting(player *);
void planting();
void end();
int choose();
void treeinfo(NODE *tree);
void bubblesort(weed **, int);
void printlist(weed *);

void start(int lv)
{
    LL A;
    int data;
    NODE *t;
    // size,waternow,watermax,fertnow,fertmax
    if (lv == 1)
    {
        t = new Pine(0, 0, 15, 0, 15, lv, 1);
    }
    else if (lv == 2)
    {
        t = new Olive(0, 0, 20, 0, 20, lv, 1);
    }
    else if (lv == 3)
    {
        t = new Maple(0, 0, 25, 0, 25, lv, 1);
    }
    else if (lv == 4)
    {
        t = new Oak(0, 0, 30, 0, 30, lv, 1);
    }
    else if (lv == 5)
    {
        t = new Palm(0, 0, 35, 0, 35, lv, 1);
    }
    else if (lv == 6)
    {
        t = new Birch(0, 0, 40, 0, 40, lv, 1);
    }
    A.add_node(t);

    // water,fert,gold,BASEATK,mana
    player *p = new player(0, 0, 1);
    int i = 0;
    int glv;
    while (1)
    {
        cout << endl;
        cout << "Enter" << endl
             << "(1) Watering      (2) Put fertilizer" << endl
             << "(3) Fighting      (4) Inventory" << endl
             << "(5) Tree Info     (0) Exit" << endl;

        cin >> i;
        system("clear");
        if (i == 1)
        {
            watering(p, t);
            t->treelevelup();
            glv = t->getlevel();
            p->baseatkchange(glv);
        }
        else if (i == 2)
        {
            puttingfert(p, t);
            t->treelevelup();
            glv = t->getlevel();
            p->baseatkchange(glv);
        }
        else if (i == 3)
        {
            cutting(p);
        }
        else if (i == 4)
        {
            p->show();
        }
        else if (i == 5)
        {
            treeinfo(t);
        }
        else if (i == 0)
            break;
        cout << endl
             << "----------------------------------" << endl;
    }
}

void Rule()
{
    cout << endl;
    cout << "                                              ." << endl;
    cout << "                                   .         ;" << endl;
    cout << "      .              .              ;%     ;;" << endl;
    cout << "        ,           ,                :;%  %;" << endl;
    cout << "         :         ;                   :;%;'     .," << endl;
    cout << ",.        %;     %;            ;        %;'    ,;" << endl;
    cout << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << endl;
    cout << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << endl;
    cout << "    ;%;      %;        ;%;        % ;%;  ,%;'" << endl;
    cout << "     `%;.     ;%;     %;'         `;%%;.%;'" << endl;
    cout << "      `:;%.    ;%%. %@;        %; ;@%;%'" << endl;
    cout << "         `:%;.  :;bd%;          %;@%;'" << endl;
    cout << "           `@%:.  :;%.         ;@@%;'" << endl;
    cout << "             `@%.  `;@%.      ;@@%;" << endl;
    cout << "               `@%%. `@%%    ;@@%;" << endl;
    cout << "                 ;@%. :@%%  %@@%;" << endl;
    cout << "                   %@bd%%%bd%%:;" << endl;
    cout << "                     #@%%%%%:;;" << endl;
    cout << "                     %@@%%%::;" << endl;
    cout << "                     %@@@%(o);  . '" << endl;
    cout << "                     %@@@o%;:(.,'" << endl;
    cout << "                 `.. %@@@o%::;" << endl;
    cout << "                    `)@@@o%::;" << endl;
    cout << "                     %@@(o)::;" << endl;
    cout << "                    .%@@@@%::;" << endl;
    cout << "                    ;%@@@@%::;." << endl;
    cout << "                   ;%@@@@%%:;;;." << endl;
    cout << "               ...;%@@@@@%%:;;;;,..   " << endl;
    cout << "--------------------------------------------------" << endl;
    cout << " Plant a tree and take care it." << endl;
}

void planting()
{
    int i;

    while ((i = choose()) != 0)
    {

        start(i);
        break;
    }
    // A.show_all();
}

void watering(player *p, NODE *t)
{
    int wateruse = t->watermaxstat() - t->waternowstat();
    // cout<<wateruse<<endl;
    if (p->wateramount() <= 0)
        cout << "You don't have enough water!" << endl;
    else if (p->wateramount() < wateruse)
    {
        cout << "You watered the tree with " << p->wateramount() << " units of water." << endl;
        t->addwater(p->wateramount());
        p->usewater(p->wateramount());
    }
    else if (p->wateramount() > wateruse)
    {
        cout << "You watered the tree with " << wateruse << " units of water." << endl;
        t->addwater(wateruse);
        p->usewater(wateruse);
    }
}

void puttingfert(player *p, NODE *t)
{
    int fertuse = t->fertmaxstat() - t->fertnowstat();
    // cout<<wateruse<<endl;
    if (p->fertamount() <= 0)
        cout << "You don't have enough fertilizer!" << endl;
    else if (p->fertamount() < fertuse)
    {
        cout << "You put " << p->fertamount() << " units of fertilizer on the tree." << endl;
        t->addfert(p->fertamount());
        p->usefert(p->fertamount());
    }
    else if (p->fertamount() > fertuse)
    {
        cout << "You put " << fertuse << " units of fertilizer on the tree." << endl;
        t->addfert(fertuse);
        p->usefert(fertuse);
    }
}

void end()
{
    cout << "Thank You for Playing" << endl;
}

int choose()
{
    int i;
    cout << "Select Tree Number(1 easy - 6 hard)" << endl;
    cout << "(1) Pine        (2) Olive         (3) Maple      " << endl;
    cout << "(4) Oak         (5) Palm          (6) Birch      " << endl;
    cout << "(0) Done" << endl;
    cin >> i;
    system("clear");
    return i;
    
}

void treeinfo(NODE *t)
{
    // t->display();
    t->show_node();
}

void bubblesort(weed **head, int count)
{
    weed **h = head;
    weed *temp = nullptr;
    int i, j, swapped;
    for (i = 0; i < count; i++)
    {
        h = head;
        swapped = 0;
        for (j = 0; j < count - 1 - i; j++)
        {
            weed *p1 = *h;
            weed *p2 = p1->move_next();
            if (p1->hp > p2->hp)
            {
                if (p1 == *head)
                {
                    *head = p2;
                }
                else
                {
                    temp->move_next() = p2;
                }

                p1->move_next() = p2->move_next();
                p2->move_next() = p1;

                temp = p2;
                swapped = 1;
            }
            else
            {
                if (j == 0)
                {
                    temp = *h;
                }
                else
                {
                    temp = temp->move_next();
                }
            }
            h = &temp->move_next();
        }
        if (!swapped)
        {
            break;
        }
    }
}

void printlist(weed *w)
{
    while (w != nullptr)
    {
        cout << w->hp << " || ";
        w = w->move_next();
    }
    cout << endl;
}

void cutting(player *p)
{
    srand(time(NULL));
    int q = rand();
    int g = rand();
    int gold = (g % 10) + 20;
    int r = (q % 2) + 1;
    int count = 1;
    int A, B, C, treelife = 100;

    weed *w;
    weed *head = nullptr;
    weed *current = nullptr;

    for (int i = 0; i < 10; i++)
    {
        w = new weed("Weed", rand() % 10 + 1);
        if (head == nullptr)
        {
            head = w;
            current = w;
        }
        else if (current != nullptr)
        {
            current->move_next() = w;
            current = w;
        }
    }

    bubblesort(&head, 10);
    //printlist(head);
    
    while (head != nullptr)
    {
        if(count>10) break;
        cout << "---------------------------" << endl;
        cout << "Weed (" << count << ") HP : " << head->hp << endl;
        cout << "Enter" << endl
             << "(1) Attack       (2) Spare" << endl;
        cin >> A;
        if (A == 1)
        {
            C = p->getbaseatk();
            B = rollDice() + C;
            cout << "Your Base ATK : " << C << endl;
            cout << "Weed has taken " << B << " damage(s)." << endl;
            head->set_weed_hp(head->hp - B);
        }
        else if (A == 2)
        {
            break;
        }
        if (head->hp <= 0)
        {
            if (head->hp % 2 == 0)
        {
            p->getwater(r);
            cout << "You gained " << r << " water" << endl;
        }
        else
        {
            p->getfert(r);
            cout << "You gained " << r << " fertilizers" << endl;
        }
            weed *temp = head;
            head = head->move_next();
            delete temp;
            count++;
            
        }
        if (cin.fail() || (A != 1 && A != 2))
        {
            cout << "Invalid input. Please enter 1 or 2." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (head == nullptr)
            break;
    }
    
} 
