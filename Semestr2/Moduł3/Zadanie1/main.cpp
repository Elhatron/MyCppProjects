#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ofstream zapis("info.txt");
    zapis << "WSTI" << " -- GRUPA-- " << 2 << "BZI" << "Seweryn Malisz" << endl;
    zapis << "Jêzyki programowania" << endl;

    return 0;
}
