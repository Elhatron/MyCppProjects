#ifndef ZADANIE2_H_INCLUDED
#define ZADANIE2_H_INCLUDED

#include <iostream>
#include "SewerynMaliszFunctions.h"
#include <cmath>

using namespace std;

int *valueInBinary;

char *valueInHex;

void convertValueToHex(unsigned int input)
{
    int charAmount = 1;
    while( pow(16,charAmount) <= input)
    {
        charAmount++;
    }
    valueInHex = new char[charAmount+1];
    valueInHex[0] = charAmount;

    unsigned int nextValue = input;

    for ( int i = 0; i < charAmount; i++)
    {
        valueInHex[i+1] = nextValue % 16;
        nextValue = ( nextValue - ( nextValue % 16) ) / 16;
    }

}

void displayHexValue()
{
    cout << "Wartosc w formie hexadecymalnej to - ";
    for ( int i = valueInHex[0]; i > 0; i--)
    {
        if ( valueInHex[i] < 10)
            cout << (int)valueInHex[i];
        else
        {
            switch(valueInHex[i])
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            }
        }
    }
    cout << endl;
}

void convertValueToBin(unsigned int input)
{
    int bitsAmount = 1;
    while( pow(2,bitsAmount) <= input)
    {
        bitsAmount++;
    }
    valueInBinary = new int[bitsAmount+1];
    valueInBinary[0] = bitsAmount;

    unsigned int nextValue = input;

    for ( int i = 0; i < bitsAmount; i++)
    {
        valueInBinary[i+1] = nextValue % 2;
        nextValue = ( nextValue - ( nextValue % 2) ) / 2;
    }
}

void displayBinaryValue()
{
    cout << "Wartosc w formie binarnej to - ";
    for ( int i = valueInBinary[0]; i > 0; i--)
    {
        cout << valueInBinary[i];
    }
    cout << endl;
}

void mainOfZadanie()
{
    unsigned int value;

    cout << "Program konwertujacy liczbe dziesietna na binarna i hexadecymalna.\nPodaj wartosc calkowita, wieksza od 0: ";

    cin >> value;

    convertValueToBin(value);
    convertValueToHex(value);

    displayBinaryValue();
    displayHexValue();
}



#endif // ZADANIE2_H_INCLUDED
