#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string csvFile;
    cin >> csvFile;

    ifstream infile(csvFile);
    if (!infile)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    string subLine;
    string currentMovieTitle = "";
    string currentMovieRating = "";
    string currentMovieShowtimes = "";
    while (getline(infile, subLine))
    {
        unsigned int pos = subLine.find(",");    
        string movieShowtime = subLine.substr(0, pos);
        subLine.erase(0, pos + 1);

        pos = subLine.find(",");
        string movieTitle = subLine.substr(0, pos);
        if (movieTitle.length() > 44)
        {
            movieTitle = movieTitle.substr(0, 44);
        }
        subLine.erase(0, pos + 1);

        string movieRating = subLine;

        if (movieTitle != currentMovieTitle)
        {
            if (currentMovieTitle != "")
            {
                cout << setw(44) << left << currentMovieTitle << " | "
                     << setw(5) << right << currentMovieRating << " | "
                     << currentMovieShowtimes << endl;
            }
            currentMovieTitle = movieTitle;
            currentMovieRating = movieRating;
            currentMovieShowtimes = movieShowtime;
        }
        else
        {
            currentMovieShowtimes += " " + movieShowtime;
        }
    }

    // Output the last movie
    cout << setw(44) << left << currentMovieTitle << " |"
         << " " << setw(5) << right << currentMovieRating << " |"
         << " " << currentMovieShowtimes << endl;

    infile.close();
    return 0;
}