#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*Program ma charakter edukacyjny, wiêc w celu unikniêcia niepotrzebnego tworzenia u¿ytkowników,
    generowany plik bat bêdzie tylko wyœwietla³ komunikaty jaki u¿ytkownik, o jakim haœle zosta³by utworzony
    */

    cout << "Podaj schematyczn¹ nazwê konta i has³a: ";
    string nazwa;
    cin >> nazwa;

    cout << "Ile takich kont utworzyæ?: ";
    int ilosc;
    cin >> ilosc;

    ofstream plik("konta.bat");

    plik << "@echo off" << endl;

    for (int i = 0; i < ilosc; i++)
    {
        plik << "echo Utworzono u¿ytkownika " << nazwa << i << " o haœle " << nazwa << i << endl;
    }

    plik << "echo Przeka¿ 1z³ na schronisko. Pozdrawiam Seweryn Malisz" << endl << "pause" << endl;

    return 0;
}
