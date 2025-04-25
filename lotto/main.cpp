#include <iostream>
#include <random>
#include <string.h>


using namespace std;

int *wylosowaneLiczby;

int tableSize = 6;

int wprowadzanie_liczb_calkowitych()
{
    string txtinput = "";

    int result = 0;

    bool incorrect = true;

    while(incorrect)
    {
        cin >> txtinput;

        try
        {
            result = stoi(txtinput);
            incorrect = false;
        }
        catch (const invalid_argument& e)
        {
            cout << "PODANO NIE LICZBOWA WARTOSC!!! PODAJ WARTOSC LICZBOWA!!\n";
        }
        catch (const out_of_range& e)
        {
            cout << "PODANO NIE LICZBOWA WARTOSC!!! PODAJ WARTOSC LICZBOWA!!\n";
        }
    }

    return result;
}

int wylosujWartosc()
{
    random_device randomDevice;
    mt19937 generator(randomDevice());
    uniform_int_distribution<int> dice(0, 48);

    return dice(generator) + 1;

}

void losowanieLiczb()
{
    wylosowaneLiczby = new int[tableSize]{wylosujWartosc(),-1,-1,-1,-1,-1};
    for(int i = 1; i < tableSize; i++)
    {
        int wylosowana = wylosujWartosc();
        bool czyWpisac = true;
        for(int j = 0; j < i; j++)
        {
            if(wylosowaneLiczby[j]==wylosowana)
            {
                czyWpisac=false;
            }
        }
        if(czyWpisac) wylosowaneLiczby[i]=wylosowana;
    }
}

void wypiszWylosowaneLiczby()
{
    for(int i = 0; i < tableSize; i++)
    {
        cout << wylosowaneLiczby[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Losowanie lotto.\nDomyslna ilosc liczb to 6. Czy chcesz zmienic? Wprowadz y by potwierdzic lub dowolna inna wartosc by pozostawic bez zmian\n";
    string wybor = "";
    cin >> wybor;
    if (strcmp(wybor.c_str(), "y") == 0)
    {
        cout << "Podaj wlasna ilosc liczb do wylosowania (pomiedzy 6 a 20): ";
        tableSize = wprowadzanie_liczb_calkowitych();
        while((tableSize>20)||(tableSize<6))
        {
            cout << "Wartosc " << tableSize << " jest spoza zadanego przedzialu 6 a 20. Podaj jeszcze raz\n";
            tableSize = wprowadzanie_liczb_calkowitych();
        }
    }
    losowanieLiczb();
    wypiszWylosowaneLiczby();
    return 0;
}
