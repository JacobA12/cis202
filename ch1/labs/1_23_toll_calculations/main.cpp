#include <iostream>
#include <iomanip>
using namespace std;

double CalcToll(int hour, bool isMorning, bool isWeekend)
{
    double tollCost = 0;
    // beginning of weekday tolls
    if (isWeekend == false && isMorning == true && hour < 7)
    {
        tollCost = 1.15;
    }
    else if (isWeekend == false && isMorning == true && hour >= 7 && hour <= 9.59)
    {
        tollCost = 2.95;
    }
    else if (isWeekend == false && isMorning == true && hour >= 10 && hour <= 12.59)
    {
        tollCost = 1.90;
    }
    else if (isWeekend == false && isMorning == false && hour >= 1 && hour <= 2.59)
    {
        tollCost = 1.90;
    }
    else if (isWeekend == false && isMorning == false && hour >= 3 && hour <= 7.59)
    {
        tollCost = 3.95;
    }
    else if (isWeekend == false && isMorning == false && hour >= 8)
    {
        tollCost = 1.40;
    }
    // end of weekday tolls

    // beginning of weekend tolls
    else if (isWeekend == true && isMorning == true && hour < 7)
    {
        tollCost = 1.05;
    }
    else if (isWeekend == true && isMorning == true && hour > 7 && hour <= 12.59)
    {
        tollCost = 2.15;
    }
    else if (isWeekend == true && isMorning == false && hour >= 1 && hour <= 7.59)
    {
        tollCost = 2.15;
    }
    else if (isWeekend == true && isMorning == false && hour >= 8)
    {
        tollCost = 1.10;
    }

    return tollCost;
}

int main()
{
    cout << CalcToll(8, true, false) << endl;  // 2.95
    cout << CalcToll(1, false, false) << endl; // 1.9
    cout << CalcToll(3, false, true) << endl;  // 2.15
    cout << CalcToll(5, true, true) << endl;   // 1.05

    return 0;
}