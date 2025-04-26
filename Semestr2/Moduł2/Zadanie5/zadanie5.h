#ifndef ZADANIE5_H_INCLUDED
#define ZADANIE5_H_INCLUDED

#include <iostream>
#include "SewerynMaliszFunctions.h"
#include <cmath>
#include <vector>

#define ADDITION_OPERATION 1
#define SUBSTRACTION_OPERATION 2
#define MULTIPLICATION_OPERATION 3
#define DIVIDE_OPERATION 4
#define ROOTING_OPERATION 5
#define PERCENTAGE_OPERATION 6
#define MODULO_OPERATION 7
#define COMPUNDING_OPERATION 8

using namespace std;

// Struktura odpowiedzialna za przechowywanie informacji na temat wyników
struct operationsDataDescription
{
    // Co to za operacja? Dodawanie, odejmowanie, mno¿enie, etc. Ka¿dej operacji odpowiada numer.
    int typeOfOperation;

    // Wynik operacji
    double resultOfOperation;

};

vector<operationsDataDescription> listOfOperations;

void addResultToList(double resultToAdd, int operationType)
{
    listOfOperations.push_back( { operationType, resultToAdd } );
}

void addResultToList(int resultToAdd, int operationType)
{
    listOfOperations.push_back( {operationType, (double) resultToAdd} );
}

void addTwoValues(double firstValue, double secondValue)
{
    addResultToList( ( firstValue + secondValue ), ADDITION_OPERATION);
}

void substractTwoValues(double firstValue, double secondValue)
{
    addResultToList( ( firstValue - secondValue ), SUBSTRACTION_OPERATION);
}

void multiplyTwoValues(double firstValue, double secondValue)
{
    addResultToList( ( firstValue*secondValue ), MULTIPLICATION_OPERATION);
}

void divideTwoValues(double firstValue, double secondValue)
{
    addResultToList( ( firstValue/secondValue ), DIVIDE_OPERATION);
}
// #define ROOTING_OPERATION 5
void squareRootOfValue(double value)
{
    addResultToList( ( sqrt( value ) ), DIVIDE_OPERATION);
}
// #define PERCENTAGE_OPERATION 6
// #define MODULO_OPERATION 7
// #define COMPUNDING_OPERATION 8


void mainOfZadanie()
{

}



#endif // ZADANIE5_H_INCLUDED
