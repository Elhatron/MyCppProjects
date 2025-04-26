#ifndef DANE_H_INCLUDED
#define DANE_H_INCLUDED

#include "SewerynMaliszFunctions.h"

using namespace std;

string nazwisko = "Malisz";
string imie = "Seweryn";

string group = "2BZI";

string moduleNumber = "2";

string moduleTitle = "Tablice";

string taskNumber = "1";
string taskTitle = "Tablica ze 100 elementami ciagu Fibonacciego";

string basicHeader = "Jezyki programowania Grupa "+group+" "+nazwisko+" "+imie+" Modul "+moduleNumber+" "+moduleTitle+" Zadanie "+taskNumber+" - "+taskTitle;

void defaultHeaderOfMyApp(){
    cout << basicHeader << endl;
}



#endif // DANE_H_INCLUDED
