#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char nazwa[50];
    cout << "Podaj nazwê pliku" << endl;
    cin >> nazwa; // test1.txt, test2.docx, test3.html

    ofstream zapis(nazwa);
    zapis << "WSTI" << " -- GRUPA-- " << 2 << "BZI" << "Seweryn Malisz" << endl;
    zapis << "Zadanie ------------ " << 3;

    zapis.close();

    return 0;
}
