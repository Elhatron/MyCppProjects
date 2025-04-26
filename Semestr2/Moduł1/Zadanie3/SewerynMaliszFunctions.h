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
/*
string polishChars(string input)
{
    string output = "";

    for(int i = 0; i < input.length(); i++)
    {
        switch(input.substr(i,1))
        {
        case "Ą":
            output+=(char)164;
            break;
        case "ą":
            output+=(char)165;
            break;
        case "Ę":
            output+=(char)168;
            break;
        case "ę":
            output+=(char)169;
            break;
        case "Ó":
            output+=(char)224;
            break;
        case "ó":
            output+=(char)162;
            break;
        case "Ś":
            output+=(char)151;
            break;
        case "ś":
            output+=(char)152;
            break;
        case "ł":
            output+=(char)136;
            break;
        case "Ł":
            output+=(char)157;
            break;
        case "Ż":
            output+=(char)89;
            break;
        case "ż":
            output+=(char)190;
            break;
        case "Ź":
            output+=(char)141;
            break;
        case "ź":
            output+=(char)171;
            break;
        case "ć":
            output+=(char)134;
            break;
        case "Ć":
            output+=(char)143;
            break;
        case "Ń":
            output+=(char)227;
            break;
        case "ń":
            output+=(char)228;
            break;

        default:
            output+=input.substr(i,1);
        }
    }

    return output;
}
*/


#endif // SEWERYNMALISZFUNCTIONS_H_INCLUDED
