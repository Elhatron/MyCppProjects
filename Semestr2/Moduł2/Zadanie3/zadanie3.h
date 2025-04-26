#ifndef ZADANIE3_H_INCLUDED
#define ZADANIE3_H_INCLUDED

#include <iostream>
#include "SewerynMaliszFunctions.h"
#include <cmath>

using namespace std;


void mainOfZadanie()
{
    int tableSize = pow(2,sizeof(char) * 8);
    char* znaki = new char[tableSize];

    for ( int i = 0; i < tableSize; i++)
    {
        znaki[i] = i;
        cout << i << " - " << znaki[i] << endl;
    }
}



#endif // ZADANIE3_H_INCLUDED
