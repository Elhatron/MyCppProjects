#ifndef ZADANIE1_H_INCLUDED
#define ZADANIE1_H_INCLUDED

#include <iostream>
#include "SewerynMaliszFunctions.h"

using namespace std;

unsigned int *fibonacciElements = new unsigned int[100];

void fillElements()
{
    fibonacciElements[0] = 1;
    fibonacciElements[1] = 1;

    for(int i = 2; i < 100; i++)
    {
        fibonacciElements[i]=fibonacciElements[i-2]+fibonacciElements[i-1];
    }
}

void mainOfZadanie()
{
    fillElements();

    for ( int i = 0; i < 100; i++)
    {
        cout << (i+1) << " - " << fibonacciElements[i] << endl;
    }
}



#endif // ZADANIE1_H_INCLUDED
