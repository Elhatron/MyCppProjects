#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string linia;
    ifstream plik;
    plik.open("testowy.txt");
    do
    {
        plik >> linia;
        cout << linia << endl;
    } while (!plik.eof());
    plik.close();

    system("PAUSE");
    return 0;
}
