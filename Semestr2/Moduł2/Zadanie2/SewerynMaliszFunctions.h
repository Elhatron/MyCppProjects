#ifndef SEWERYNMALISZFUNCTIONS_H_INCLUDED
#define SEWERYNMALISZFUNCTIONS_H_INCLUDED

#include <iostream>
#include <string>
#include <limits>

using namespace std;

bool wprowadzanie_liczb_calkowitych(int& output)
{
    string txtinput = "";
    bool cinOK = true;
    bool incorrect = true;

    while(incorrect)
    {
        getline(cin, txtinput);

        if (cin.eof())
        {
            cin.clear();
            cinOK = false;
            cout << endl;
            break;
        }

        if (cin.fail())
        {
            cinOK = false;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (txtinput.empty())
        {
            cout << "Nie podano zadnej wartosci! Sprobuj ponownie" << endl;
            continue;
        }

        try
        {
            output = stoi(txtinput);
            incorrect = false;

        }
        catch (const invalid_argument& e)
        {
            cout << "PODANO NIE LICZBOWA WARTOSC!!! PODAJ WARTOSC LICZBOWA!!\n";
        }
        catch (const out_of_range& e)
        {
            cout << "WARTOSC ZBYT DUZA\n";
        }
    }

    return cinOK;
}

#endif // SEWERYNMALISZFUNCTIONS_H_INCLUDED
