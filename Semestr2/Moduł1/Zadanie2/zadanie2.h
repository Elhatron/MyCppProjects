#ifndef ZADANIE2_H_INCLUDED
#define ZADANIE2_H_INCLUDED

#include <iostream>

using namespace std;

void mainOfZadanie()
{
    int inputVariable = 0;

    int sumOfVariables = 0;
    int prodOfVariables = 1; // Zmienne wynikowe. Wynik sumy wstêpnie ustalamy na 0 by nie wp³ywa³ na kolejne wartoœci a wynik iloczynu na 1 by mno¿enie przebiega³o poprawnie

    int* values = new int[100];  //na potrzeby zadania przyjmujemy rozmiar tablicy 100
    int valuesAmount = 0;

    cout << "Podaj wartosc. Jesli podasz 0 program zakonczy dzialanie: ";

    do
    {
        cin >> inputVariable;

        if(inputVariable!=0)
        {
            values[valuesAmount] = inputVariable;
            valuesAmount++;

            cout << "Podaj wartosc: ";
        }
    }
    while(inputVariable!=0);

    if (valuesAmount > 0)
    {
        cout << "Podano nastepujaca ilosc wartosci: " << valuesAmount << endl;

        for(int i = 0; i < valuesAmount; i++)
            {
                sumOfVariables+=values[i];
                prodOfVariables*=values[i];
            }

        cout << "Czy ilosc wartosci jest parzysta? Jesli tak to 0 jesli nie to 1 - " << (valuesAmount % 2) << endl;
        cout << "Suma wartosci to: " << sumOfVariables << endl;
        cout << "Iloczyn wartosci to: " << prodOfVariables << endl;
    }
    else
    {
        cout << "Nic nie podano" << endl;
    }
}



#endif // ZADANIE2_H_INCLUDED
