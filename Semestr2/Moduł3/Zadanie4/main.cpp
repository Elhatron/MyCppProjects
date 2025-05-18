#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a,b;
    ifstream odczyt("dane.txt");

    if (!odczyt)
    {
        cout << "Pliku nie mo¿na otworzyæ";
        getchar();
        return 1;
    }

    odczyt >> a >> b;
    odczyt.close();

    cout << "Pobrane dane: " << a << " i " << b << endl;

    system("PAUSE");
    return 0;
}
