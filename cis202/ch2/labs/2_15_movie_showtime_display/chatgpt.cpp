#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

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
    string current_title = "";
    string current_rating = "";
    string current_showtimes = "";
    while (getline(infile, line))
    {
        size_t pos = line.find(",");    
        string showtime = line.substr(0, pos);
        line.erase(0, pos + 1);

        pos = line.find(",");
        string title = line.substr(0, pos);
        if (title.length() > 44)
        {
            title = title.substr(0, 44);
        }
        line.erase(0, pos + 1);

        string rating = line;

        if (title != current_title)
        {
            if (current_title != "")
            {
                cout << setw(44) << left << current_title << " | "
                     << setw(5) << right << current_rating << " | "
                     << current_showtimes << endl;
            }
            current_title = title;
            current_rating = rating;
            current_showtimes = showtime;
        }
        else
        {
            current_showtimes += " " + showtime;
        }
    }

    // Output the last movie
    cout << setw(44) << left << current_title << " |"
         << " " << setw(5) << right << current_rating << " |"
         << " " << current_showtimes << endl;

    infile.close();
    return 0;
}