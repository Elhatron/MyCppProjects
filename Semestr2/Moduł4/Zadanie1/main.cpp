#include <iostream>
#include <fstream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
    ifstream inFile("liczby.txt");
    ofstream outFile("odpowiedzi_malisz.txt");

    if (!inFile.is_open() || !outFile.is_open()) {
        cerr << "B³¹d otwierania plików!" << endl;
        return 1;
    }

    string line;
    int countEven = 0;
    int count9Digits = 0;
    unsigned long long maxDecimal = 0;
    string maxBinary = "";
    unsigned long long sum9Digits = 0;

    while (getline(inFile, line)) {
        unsigned long long decimal = stoull(line, nullptr, 2);

        if (line.back() == '0') {
            countEven++;
        }

        if (decimal > maxDecimal) {
            maxDecimal = decimal;
            maxBinary = line;
        }

        if (line.length() == 9) {
            count9Digits++;
            sum9Digits += decimal;
        }
    }

    outFile << "Autor: Seweryn Malisz\n" << endl;

    outFile << "1. " << countEven << endl;
    outFile << "2. " << maxBinary << " " << maxDecimal << endl;

    string sum9Binary = bitset<64>(sum9Digits).to_string();
    sum9Binary.erase(0, sum9Binary.find_first_not_of('0'));

    outFile << "3. " << count9Digits << " " << sum9Binary << " " << sum9Digits << endl;

    inFile.close();
    outFile.close();

    return 0;
}
