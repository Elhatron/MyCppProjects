#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream we("liczby1.txt");
    ofstream wy("liczby2.txt");

    int a;
    while (!we.eof())
    {
        we >> a;
        if (we)
        {
            if (a%2 == 0) wy << a << endl;
        }
    }

    we.close();
    wy.close();

    system("PAUSE");
    return 0;
}
