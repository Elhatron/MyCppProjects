#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream we("dane.txt");

    if (!we)
    {
        cout << "Pliku nie mo¿na otworzyæ";
        getchar();
        return 1;
    }

    int licznik = 0;
    char a;
    while (!we.eof())
    {
        we >> a;
        cout << a;
        if (we)
        {
            licznik++;
        }
    }

    cout << endl << licznik << endl;

    we.close();

    system("PAUSE");
    return 0;
}
