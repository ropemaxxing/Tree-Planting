#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

#include "color.h"

using namespace std;

int rollDice();
void Dice(int, int);

int rollDice()
{
    srand(time(NULL));
    int r = rand();
    int q = rand();
    int i = (r % 5) + 1, x = (q % 5) + 1, k;
    // cout<<"i = "<<i<<" x = "<<x<<endl<<endl;
    k = i - x;
    if (k < 0)
        k = 0;
    Dice(i, x);
    return k;
}

void Dice(int i, int x)
{
    system("clear");
    cout << endl
         << "////////////////////////////////////" << endl;
    cout << "///        -----          -----  ///" << endl;
    cout << "///  You : - " <<GREEN<< i <<RESET<< " -    Weed: - "<<RED<< x <<RESET<< " -  ///" << endl;
    cout << "///        -----          -----  ///" << endl;
    cout
        << "////////////////////////////////////" << endl
        << endl;
}