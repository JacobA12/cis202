#include <iostream>
#include <string>
using namespace std;

int DateParser(string month) {
    if (month == "January") return 1;
    if (month == "February") return 2;
    if (month == "March") return 3;
    if (month == "April") return 4;
    if (month == "May") return 5;
    if (month == "June") return 6;
    if (month == "July") return 7;
    if (month == "August") return 8;
    if (month == "September") return 9;
    if (month == "October") return 10;
    if (month == "November") return 11;
    if (month == "December") return 12;
    return 0;
}

int main() {
    string input;
    while (getline(cin, input)) {
        if (input == "-1") break;
        if (input.size() < 12) continue; // Too short to be a valid date
        if (input[2] != ' ' || input[4] != ',' || input[5] != ' ') continue; // Invalid format
        int month = DateParser(input.substr(0, 3));
        if (month == 0) continue; // Invalid month
        int day = stoi(input.substr(4, 1));
        int year = stoi(input.substr(7, 4));
        cout << month << "-" << day << "-" << year << endl;
    }
    return 0;
}
