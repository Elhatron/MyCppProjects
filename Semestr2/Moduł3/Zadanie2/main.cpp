#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream zapis;
    zapis.open("info.txt");
    zapis << "Jêzyki programowania" << endl;
    zapis.close();

    zapis.open("info.txt", ios::app);
    zapis << "Jêzyki programowania" << endl;
    zapis.close();


    return 0;
}
