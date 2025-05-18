#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    float a, suma;
    ifstream odczyt("dane2.txt");

    if (!odczyt)
    {
        cout << "Pliku nie mo¿na otworzyæ";
        getchar();
        return 1;
    }

    while (!odczyt.eof())
    {
        odczyt >> a;
        if (odczyt) suma = suma + a;
    }

    cout << suma << endl;

    system("PAUSE");
    return 0;
}
