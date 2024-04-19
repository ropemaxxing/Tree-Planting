#include <iostream>
#include <iomanip>
#include <limits>
#include "Combat.h"
#include "TreeStat.h"
#include "LL.h"
using namespace std;

void start();
void watering();
void cutting();
void Rule();
void planting();
void end();
int choose();

void start()
{
    int i;
    cout<<"Enter"<<endl<<"(1) Planting      (2) Watering"<<endl<<"(3) No Weed        (4) Exit"<<endl;
    cin>>i;
    while(i)
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
    cout<<"All you have to do is plant a TREE then CUT IT!!."<<endl;
    cout<<"Planting: Choose number of tree you want to plant and take care them."<<endl;
    cout<<"Tree number data :"<<endl;
    cout<<"(1) Oak           (2) Pine          (3) Birch      "<<endl;
    cout<<"(4) Maple         (5) Palm          (6) Olive        "<<endl;
    cout<<"Here's three stage of tree"<<endl;
    cout<<" ____________________________________________"<<endl;
    cout<<"|                                            |"<<endl;
    cout<<"|                                oto         |"<<endl;
    cout<<"|                              ooqoooo       |"<<endl;
    cout<<"|                             ooo-ooxoo      |"<<endl;
    cout<<"|                            ooxoxoooooo     |"<<endl;
    cout<<"|                            oououooooxo     |"<<endl;
    cout<<"|                             o-oox-ooo      |"<<endl;
    cout<<"|                             ooooxooo       |"<<endl;
    cout<<"|                               oxxxo        |"<<endl;
    cout<<"|                   ooo          xxx         |"<<endl;
    cout<<"|                  oxooo         xxx         |"<<endl;
    cout<<"|                  oooxo         xxx         |"<<endl;
    cout<<"|                   oxo          xxx         |"<<endl;
    cout<<"|                    x          xxxxx        |"<<endl;
    cout<<"|       x           xxx        x xx xx       |"<<endl;
    cout<<"|                                            |"<<endl;
    cout<<"|      1st          2nd          3rd         |"<<endl;
    cout<<"|                                            |"<<endl;
    cout<<"|     baby          not        ready to      |"<<endl;
    cout<<"|     plant        ready        be cut       |"<<endl;
    cout<<"|____________________________________________|"<<endl<<endl;
    
}

void cutting()
{
    system("CLS");
    int A,B,treelife = 100;
    while(treelife>0||A==2)
    {
        cout<<"Tree Life : "<<treelife<<endl;
        cout<<"Enter"<<endl<<"(1) Attack       (2) Spare"<<endl;
        cin>>A;
        if(A==1)
        {
            B = rollDice();
            treelife=treelife-B;
        }
    }
    //if(treelife<=0) ~tree();
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