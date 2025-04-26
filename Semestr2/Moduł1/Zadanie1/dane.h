#ifndef DANE_H_INCLUDED
#define DANE_H_INCLUDED

using namespace std;

string nazwisko = "Malisz";
string imie = "Seweryn";

string group = "2BZI";

string taskTitle = "Modul 1 Funkcje Zadanie 1";

string basicHeader = "Jezyki programowania Grupa "+group+" "+nazwisko+" "+imie+" "+taskTitle;

void defaultHeaderOfMyApp(){
    cout << basicHeader << endl;
}



#endif // DANE_H_INCLUDED
