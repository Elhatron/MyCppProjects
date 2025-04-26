#ifndef ZADANIE5_H_INCLUDED
#define ZADANIE5_H_INCLUDED

#include <iostream>
#include "SewerynMaliszFunctions.h"

using namespace std;

bool variableInBinary[] = {0,0,0,0,0,0,0,0};

bool reversedVariableInBinary[] = {0,0,0,0,0,0,0,0};

void getBit(unsigned int input)
{
    short int i = 6;
    bool bit = input % 2;
    int nextValue = (input - bit)/2;
    variableInBinary[7] = bit;
    while( i >= 0)
    {
        bit = nextValue % 2;
        nextValue = (nextValue - bit)/2;
        variableInBinary[i] = bit;;
        i--;
    }
}

int variableBinaryToInteger()
{
    return (variableInBinary[0]*128+
            variableInBinary[1]*64+
            variableInBinary[2]*32+
            variableInBinary[3]*16+
            variableInBinary[4]*8+
            variableInBinary[5]*4+
            variableInBinary[6]*2+
            variableInBinary[7]*1);
}

void displayVariable()
{
    cout << (int)variableInBinary[0] <<
            (int)variableInBinary[1] <<
            (int)variableInBinary[2] <<
            (int)variableInBinary[3] <<
            (int)variableInBinary[4] <<
            (int)variableInBinary[5] <<
            (int)variableInBinary[6] <<
            (int)variableInBinary[7];
}

void reverseVariable()
{
    int j = 7;
    for ( int i = 0; i < 8; i++)
    {
        reversedVariableInBinary[i] = variableInBinary[j];
        j--;
    }
}

void displayReversedVariable()
{
    cout << (int)reversedVariableInBinary[0] <<
            (int)reversedVariableInBinary[1] <<
            (int)reversedVariableInBinary[2] <<
            (int)reversedVariableInBinary[3] <<
            (int)reversedVariableInBinary[4] <<
            (int)reversedVariableInBinary[5] <<
            (int)reversedVariableInBinary[6] <<
            (int)reversedVariableInBinary[7];
}

int reversedVariableBinaryToInteger()
{
    return (reversedVariableInBinary[0]*128+
            reversedVariableInBinary[1]*64+
            reversedVariableInBinary[2]*32+
            reversedVariableInBinary[3]*16+
            reversedVariableInBinary[4]*8+
            reversedVariableInBinary[5]*4+
            reversedVariableInBinary[6]*2+
            reversedVariableInBinary[7]*1);
}

void mainOfZadanie()
{
    int value = 0;

    cout << "Binarny odwracacz wartosci. W kolejnym kroku podaj wartosc mniejsza niz 256." << endl;

    do
    {
        cout << "Podaj liczbe do odwrocenia wartosci binarnej: ";
        wprowadzanie_liczb_calkowitych(value);
        if( value > 255 ) cout << "Podales za duza wartosc" << endl;
    }
    while(value > 255);

    getBit(value);

    cout << variableBinaryToInteger() << " binarnie to ";
    displayVariable();
    cout << endl;

    reverseVariable();

    cout << "Odwrocona wartosc to " << reversedVariableBinaryToInteger() << " a binarnie to ";
    displayReversedVariable();
    cout << endl;

}



#endif // ZADANIE5_H_INCLUDED
