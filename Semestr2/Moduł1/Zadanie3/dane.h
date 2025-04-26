#ifndef DANE_H_INCLUDED
#define DANE_H_INCLUDED

#include "SewerynMaliszFunctions.h"

using namespace std;

string nazwisko = "Malisz";
string imie = "Seweryn";

string group = "2BZI";

string moduleNumber = "1";

string moduleTitle = "Funkcje";

string taskNumber = "3";
string taskTitle = "Ciag Fibonacciego";

string basicHeader = "Jezyki programowania Grupa "+group+" "+nazwisko+" "+imie+" Modul "+moduleNumber+" "+moduleTitle+" Zadanie "+taskNumber+" - "+taskTitle;

void defaultHeaderOfMyApp(){
    cout << basicHeader << endl;
}



#endif // DANE_H_INCLUDED
