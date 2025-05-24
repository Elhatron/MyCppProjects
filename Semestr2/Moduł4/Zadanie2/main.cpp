#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Person {
    double weight;
    double height;
    double bmi;
    string status;
};

double calculateBMI(double weight, double height) {
    return weight / (height * height);
}

string determineStatus(double bmi) {
    if (bmi < 18.5)
        return "Niedowaga";
    else if (bmi < 24.9)
        return "Waga prawid³owa";
    else if (bmi < 29.9)
        return "Nadwaga";
    else if (bmi < 34.9)
        return "Oty³oœæ I stopnia";
    else
        return "Oty³oœæ II stopnia";
}

int main() {
    ifstream input("dane_malisz.txt");

    const char* outputFileName = "raport.html";
    ofstream output(outputFileName);

    if (!input.is_open() || !output.is_open()) {
        cerr << "B³¹d otwarcia pliku!" << endl;
        return 1;
    }

    vector<Person> people;
    double weight, height;

    while (input >> weight >> height) {
        Person p;
        p.weight = weight;
        p.height = height;
        p.bmi = calculateBMI(weight, height);
        p.status = determineStatus(p.bmi);
        people.push_back(p);
    }

    output << "<!DOCTYPE html>\n<html lang='pl'>\n<head>\n";
    output << "<meta charset='UTF-8'>\n<title>Raport BMI</title>\n";
    output << "<style>\n"
           << "table { border-collapse: collapse; width: 60%; margin: 20px auto; font-family: Arial; }\n"
           << "th, td { border: 1px solid #ccc; padding: 8px; text-align: center; }\n"
           << "th { background-color: #f2f2f2; }\n"
           << "tr:nth-child(even) { background-color: #f9f9f9; }\n"
           << "</style>\n</head>\n<body>\n";
    output << "<h2 style='text-align:center;'>Raport BMI</h2>\n";
    output << "<table>\n<tr><th>Waga (kg)</th><th>Wzrost (m)</th><th>BMI</th><th>Status</th></tr>\n";

    output << fixed << setprecision(2);
    for (const auto& person : people) {
        output << "<tr><td>" << person.weight << "</td>"
               << "<td>" << person.height << "</td>"
               << "<td>" << person.bmi << "</td>"
               << "<td>" << person.status << "</td></tr>\n";
    }

    output << "</table>\n</body>\n</html>\n";

    cout << "Dane zapisano do pliku "<< outputFileName << endl;

    input.close();
    output.close();
    system(outputFileName);
    return 0;
}
