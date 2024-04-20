#include <iostream>
#include <iomanip>
#include <limits>
#include "Combat.h"
#include "TreeStat.h"
#include "LL.h"
#include "WeedStat.h"
#include "NODE.h"
using namespace std;

void start();
void watering();
void cutting();
void Rule();
void planting();
void end();
int choose();
void bubblesort(weed** , int );
void printlist(weed* );

void start()
{
    int i;
    cout<<"Enter"<<endl<<"(1) Planting      (2) Watering"<<endl<<"(3) No Weed        (4) Exit"<<endl;
    cin>>i;
    while(i)
    system("CLS");
    player *p = new player();
    int i = 0;
    while (1)
    {
        if(i==1) planting();
        else if(i==2) watering();
        else if(i==3) cutting();
        else if(i==4) break;
        else cout << "Invalid input. Please try again." << endl;
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
    system("CLS");
    cout<<endl;
    cout << "All you have to do is plant a TREE then CUT IT!!." << endl;
    cout << "Planting: Choose number of tree you want to plant and take care them." << endl;
    cout << "Tree number data :" << endl;
    cout << "(1) Oak           (2) Pine          (3) Birch      " << endl;
    cout << "(4) Maple         (5) Palm          (6) Olive        " << endl;
    cout << "Here's three stage of tree" << endl;
    cout << " ____________________________________________" << endl;
    cout << "|                                            |" << endl;
    cout << "|                                oto         |" << endl;
    cout << "|                              ooqoooo       |" << endl;
    cout << "|                             ooo-ooxoo      |" << endl;
    cout << "|                            ooxoxoooooo     |" << endl;
    cout << "|                            oououooooxo     |" << endl;
    cout << "|                             o-oox-ooo      |" << endl;
    cout << "|                             ooooxooo       |" << endl;
    cout << "|                               oxxxo        |" << endl;
    cout << "|                   ooo          xxx         |" << endl;
    cout << "|                  oxooo         xxx         |" << endl;
    cout << "|                  oooxo         xxx         |" << endl;
    cout << "|                   oxo          xxx         |" << endl;
    cout << "|                    x          xxxxx        |" << endl;
    cout << "|       x           xxx        x xx xx       |" << endl;
    cout << "|                                            |" << endl;
    cout << "|      1st          2nd          3rd         |" << endl;
    cout << "|                                            |" << endl;
    cout << "|     baby          not        ready to      |" << endl;
    cout << "|     plant        ready        be cut       |" << endl;
    cout << "|____________________________________________|" << endl
         << endl;
}

void cutting()
{
    srand(time(NULL));
    int q = rand();
    int r = (q % 2) + 1;

    weed* w;
    weed* head = nullptr;
    weed* current = nullptr;

    for(int i = 0 ; i<10 ; i++){
        w = new weed("Weed",rand()%10);
        if(head == nullptr){
            head = w;
            current = w;
        }
        else if(current != nullptr){
            current->move_next() = w;
            current = w;
        }
    }

    bubblesort(&head,10);
    printlist(head);
    /*
    weed* temp = NULL;
    weed* head = w;
    weed* next = w->move_next();

    while(next != NULL){
        if(head->weed_hp() > next->weed_hp()){
            temp = head;
            head = next;
            temp->move_next() = temp->move_next()->move_next();
            head->move_next() = temp;
            next = head->move_next();
        }
        else{
            head = head->move_next();
            next = next->move_next();
        }
    }
    */

    int count = 1;
    int A, B, treelife = 100;
    while (head != nullptr)
    {
        cout << "---------------------------"<<endl;
        cout << "Weed ("<<count<<") HP : " << head->hp << endl;
        cout << "Enter" << endl
             << "(1) Attack       (2) Spare" << endl;
        cin >> A;
        if (A == 1)
        {
            B = rollDice();
            cout << "Weed has taken " << B << " damage(s)." << endl;
            head->set_weed_hp(head->hp-B);
        }
        else if (A == 2)
        {
            break;
        }
        if(head->hp <= 0){
            weed* temp = head;
            head = head->move_next();
            delete temp;
            count++;
        }
    }
    //if(treelife<=0) ~tree();
    if (head->hp <= 0)
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
    // if(treelife<=0) ~tree();
}

void planting()
{
    system("CLS");
    LL A;
    int data,i;
    NODE *t;

    do
    {
        i = choose();
        if(i>6 || i<0){
            cout << "Invalid input. Please try again." << endl;
            continue;
        }
        else if(i!=0){
            cout<<"Input Tree No. : ";
            cin>>data;
            t = new tree(i,data);
            A.add_node(t);
        }
        
    }while(i!=0);
    A.show_all();
    start();
}



void watering()
{
    system("CLS");
}

void end()
{
    cout<<"Thank you for Playing"<<endl;
}

int choose()
{
    system("CLS");
    int i;
    cout<<"Select Tree Number(1-6)"<<endl;
    cout<<"(1) Oak           (2) Pine          (3) Birch      "<<endl;
    cout<<"(4) Maple         (5) Palm          (6) Olive      "<<endl;
    cout<<"(0) Done"<<endl;
    cin>>i;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return i;
}



void bubblesort(weed** head, int count){
    weed** h;
    weed* temp;
    int i, j, swapped;
    for(i=0 ; i<count ; i++){
        h = head;
        swapped = 0;
        for(j=0 ; j<count-1-i ; j++){
            weed* p1 = *h;
            weed* p2 = p1->move_next();
            if(p1->hp > p2->hp){
                if(p1 == *head) {
                    *head = p2;
                } else {
                    temp->move_next() = p2;
                }

                p1->move_next() = p2->move_next();
                p2->move_next() = p1;

                temp = p2;
                swapped = 1;
            }
            else {
                if(j == 0) {
                    temp = *h;
                } 
                else {
                    temp = temp->move_next();
                }
            }
            h = &temp->move_next();
            }
            if(!swapped){
                break;
        }
    }
}

void printlist(weed* w){
    while(w!=NULL){
        cout<<w->hp<<" || ";
        w = w->move_next();
    }
    cout<<endl;
}