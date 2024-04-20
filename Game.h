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
        t = new Oak(0, 0, 15, 0, 15, lv, 1);
    }
    else if (lv == 2)
    {
        t = new Pine(0, 0, 15, 0, 15, lv, 1);
    }
    else if (lv == 3)
    {
        t = new Birch(0, 0, 15, 0, 15, lv, 1);
    }
    else if (lv == 4)
    {
        t = new Maple(0, 0, 15, 0, 15, lv, 1);
    }
    else if (lv == 5)
    {
        t = new Palm(0, 0, 15, 0, 15, lv, 1);
    }
    else if (lv == 6)
    {
        t = new Olive(0, 0, 15, 0, 15, lv, 1);
    }
    A.add_node(t);

    // water,fert,gold,BASEATK,mana
    player *p = new player(1000, 1000, 1000, 1000, 1000);
    int i = 0;
    while (1)
    {
        cout << endl;
        cout << "Enter" << endl
             << "(1) Watering      (2) Put fertilizer" << endl
             << "(3) Fighting      (4) Inventory" << endl
             << "(5) Tree Info     (0) Exit" << endl;

        cin >> i;
        system("CLS");
        if (i == 1)
        {
            watering(p, t);
            t->treelevelup();
        }
        else if (i == 2)
        {
            puttingfert(p, t);
            t->treelevelup();
        }
        else if (i == 3)
        {
            cutting(p);
        }
        else if (i == 3)
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

/*void tutorial()
{
    int i;
    cout<<"Enter"<<endl<<"(1) Planting      (2) Watering"<<endl<<"(3) Cutting"<<endl;
    cin>>i;
    if(i==1) plantttr();
    else if(i==2) waterttr();
    else if(i==3) cutttr();
}*/

void Rule()
{
    cout << endl;
    // cout << "All you have to do is plant a TREE then CUT IT!!." << endl;
    // cout << "Planting: Choose number of tree you want to plant and take care them." << endl;
    // cout << "Tree number data :" << endl;
    // cout << "(1) Oak           (2) Pine          (3) Birch      " << endl;
    // cout << "(4) Maple         (5) Palm          (6) Olive        " << endl;
    // cout << "Here's three stage of tree" << endl;
    // cout << " ____________________________________________" << endl;
    // cout << "|                                            |" << endl;
    // cout << "|                               ootoo        |" << endl;
    // cout << "|                             oooqooooo      |" << endl;
    // cout << "|                            oooo-ooxooo     |" << endl;
    // cout << "|                           oooxoxooooooo    |" << endl;
    // cout << "|                           ooououooooxoo    |" << endl;
    // cout << "|                           ooo-oox-ooooo    |" << endl;
    // cout << "|                            oooooxooooo     |" << endl;
    // cout << "|                             oxoxxxoxo      |" << endl;
    // cout << "|                   ooo          xxx         |" << endl;
    // cout << "|                  oxooo         xxx         |" << endl;
    // cout << "|                  oooxo         xxx         |" << endl;
    // cout << "|                   oxo          xxx         |" << endl;
    // cout << "|                    x          xxxxx        |" << endl;
    // cout << "|       x           xxx        x xx xx       |" << endl;
    // cout << "|                                            |" << endl;
    // cout << "|      1st          2nd          3rd         |" << endl;
    // cout << "|____________________________________________|" << endl
    //      << endl;
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
}

// void cutting(player *p)
// {
//     srand(time(NULL));
//     int q = rand();
//     int g = rand();
//     int gold = (g % 10) + 20;
//     int r = (q % 2) + 1;
//     weed *w = new weed();
//     int A, B, C, treelife = 100;
//     while (w->hp > 0)
//     {
//         cout << "Weed HP : " << w->hp << endl;
//         cout << "Enter" << endl
//              << "(1) Attack       (2) Run Away" << endl;
//         cin >> A;
//         system("clear");
//         if (A == 1)
//         {
//             B = rollDice();
//             cout << "Weed has taken " << B << " damage(s)." << endl;
//             w->hp -= B;
//         }
//         else if (A == 2)
//         {
//             break;
//         }
//         else if (treelife <= 0)
//         {
//             break;
//         }
//     }
//     if (w->hp <= 0)
//     {
//         delete (w);
//         if (w->hp % 2 == 0)
//         {
//             p->getwater(r);
//             cout << "You gained " << r << " water";
//         }
//         else
//         {
//             p->getfert(r);
//             cout << "You gained " << r << " fertilizer";
//         }
//         p->goldchange(gold);
//         cout << " and " << gold << " golds" << endl;
//     }
//     if (treelife <= 0)
//     {
//         cout<<"Tree dead";
//     }
// }

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
    cout << "(1) Oak           (2) Pine          (3) Birch      " << endl;
    cout << "(4) Maple         (5) Palm          (6) Olive      " << endl;
    cout << "(0) Done" << endl;
    cin >> i;
    return i;
}

void treeinfo(NODE *t)
{
    // t->display();
    t->show_node();
}

void bubblesort(weed **head, int count)
{
    weed **h;
    weed *temp;
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
    while (w != NULL)
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
    // printlist(head);
    int count = 1;

    int A, B, C, treelife = 100;
    while (head != nullptr)
    {
        cout << "---------------------------" << endl;
        cout << "Weed (" << count << ") HP : " << head->hp << endl;
        cout << "Enter" << endl
             << "(1) Attack       (2) Spare" << endl;
        cin >> A;
        if (A == 1)
        {
            B = 6; // rollDice();
            cout << "Weed has taken " << B << " damage(s)." << endl;
            head->set_weed_hp(head->hp - B);
        }
        else if (A == 2)
        {
            break;
        }
        if (head->hp <= 0)
        {
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
    // if(treelife<=0) ~tree();
    if (head == nullptr)
    {
        if (r % 2 == 0)
        {
            p->getwater(r);
            cout << "You gained " << r << " water" << endl;
        }
        else
        {
            p->getfert(r);
            cout << "You gained " << r << " fertilizers" << endl;
        }
    }
}