#ifndef ZADANIE3_H_INCLUDED
#define ZADANIE3_H_INCLUDED

#include <iostream>
#include "SewerynMaliszFunctions.h"

using namespace std;

void mainOfZadanie()
{
    cout << "Dla ilu liczb chcesz liczyc ciag? ";

    int iloscElementow = 0;

    while(true)
    {
        cout << "Podaj wartosc wieksza od 2: ";

        if(wprowadzanie_liczb_calkowitych(iloscElementow))   //własna funkcja sprawdzjąca poprawność danych
        {
            if (iloscElementow > 2)
            {
                int* elementy = new int[iloscElementow];

                elementy[0] = 0;
                elementy[1] = 1;

                cout << elementy[0] << " " << elementy [1] << " ";

                for(int i = 2; i < iloscElementow; i++)
                {
                    elementy[i]=elementy[i-2]+elementy[i-1];
                    cout << elementy[i] << " ";
                }

                cout << endl;
                break;
            }
            else
            {
                cout << "Ilosc elementow musi byc wieksza niz 2" << endl;
            }
        }
        else
        {
            cout << "Przerwano prace programu" << endl;
            break;
        }
    }
}



#endif // ZADANIE3_H_INCLUDED
