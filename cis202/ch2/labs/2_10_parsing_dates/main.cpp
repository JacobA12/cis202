#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int DateParser(string month)
{
    int monthInt = 0;

    if (month == "January")
        monthInt = 1;
    else if (month == "February")
        monthInt = 2;
    else if (month == "March")
        monthInt = 3;
    else if (month == "April")
        monthInt = 4;
    else if (month == "May")
        monthInt = 5;
    else if (month == "June")
        monthInt = 6;
    else if (month == "July")
        monthInt = 7;
    else if (month == "August")
        monthInt = 8;
    else if (month == "September")
        monthInt = 9;
    else if (month == "October")
        monthInt = 10;
    else if (month == "November")
        monthInt = 11;
    else if (month == "December")
        monthInt = 12;
    return monthInt;
}

int main()
{

    // TODO: Read dates from input, parse the dates to find the ones
    //       in the correct format, and output in m-d-yyyy format
    string userInput;
    string currentMonth;

    while (getline(cin, userInput))
    {
        if (userInput == "-1")
        {
            break;
        }

        // beginning of parsing month from input
        unsigned int monthPos = userInput.find(' ');
        if (monthPos == string::npos)
        {
            continue;
        }
        currentMonth = userInput.substr(0, monthPos);
        int monthInt = DateParser(currentMonth);
        // end of parsing month from user input

        // beginning of day parsing from input
        string currentDay;
        int firstComma = userInput.find(",");
        int dayPos = monthPos + 1;
        currentDay = userInput.substr(dayPos, firstComma - dayPos);
        if (firstComma == string::npos)
        {
            continue;
        }
        int dayInt = stoi(currentDay);
        // end of day parsing from input

        // beginning of year parsing from input
        string currentYear;

        int yearPos = firstComma + 2; // skip comma and space
        currentYear = userInput.substr(yearPos);
        int yearInt = stoi(currentYear);
        // end of year parsing from input

        cout << monthInt << "-" << dayInt << "-" << yearInt << endl;
    }
}
