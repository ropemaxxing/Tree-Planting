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
        system("CLS");
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
    int i;
    cout << endl;
    cout << "Hello and Welcome to TREE SIMULATOR" << endl;
    cout << "Enter" << endl
         << "(1) Planting         (2) Rule" << endl;
    cout << "(3) End" << endl;
    cin >> i;

    return i;
}
