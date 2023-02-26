#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    string filename;
    cout << "Enter the name of the CSV file: ";
    cin >> filename;

    ifstream infile(filename);
    if (!infile)
    {
        cout << "Error opening file. Program terminated." << endl;
        return 1;
    }

    string line;
    string currentMovieTitle = "";
    string currentMovieRating = "";
    string currentMovieShowtime = "";

    return 0;
}
