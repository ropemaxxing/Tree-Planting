#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

using namespace std;

#include "Game.h"

int menu();

int main(int argc, char *argv[])
{
    int i;
    while (i = menu())
    {
        system("clear");
        if (i == 1)
        {
            planting();
        }
        else if (i == 2)
        {
            Rule();
        }
        else if (i == 3)
        {
            end();
            break;
        }
        
    }
}

int menu()
{
    int i,f=1;
    while(f)
    {
        cout << endl;
        cout << "Hello and Welcome to TREE SIMULATOR" << endl;
        cout << "Enter" << endl
             << "(1) Planting         (2) Description" << endl;
        cout << "(3) End" << endl;
        cin >> i;

        if (cin.fail() || (i < 1 || i > 3) || cin.peek() != '\n')
        {   
            system("clear");
            cout << "Invalid input. Please enter 1-3" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else f=0;
    }

    return i;
}


/*
//test visual
int main(){
    //waterdroplet();
    //fertfert();
    //backpack();
    //shears();
    treepruning();
}
*/
