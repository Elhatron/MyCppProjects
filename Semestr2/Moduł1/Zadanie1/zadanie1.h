#ifndef ZADANIE1_H_INCLUDED
#define ZADANIE1_H_INCLUDED

#include <iostream>

using namespace std;

void clearVariable(int& inputData1, int& inputData2, int& inputData3)
{
    inputData1 = 0;
    inputData2 = 0;
    inputData3 = 0;
}

void mainOfZadanie()
{
    int x = 1;
    int y = 2;
    int z = 3;
    cout << x << " " << y << " " << z << " " << endl;
    clearVariable(x,y,z);
    cout << x << " " << y << " " << z << " " << endl;

}



#endif // ZADANIE1_H_INCLUDED
