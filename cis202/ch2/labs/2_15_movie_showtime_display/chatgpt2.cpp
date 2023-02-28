#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the CSV file: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Unable to open file " << filename << endl;
        return 1;
    }

    vector<vector<string>> movies;
    string line;
    while (getline(file, line)) {
        vector<string> tokens;
        string token;
        int start = 0;
        int end = line.find(',');
        while (end != string::npos) {
            token = line.substr(start, end - start);
            tokens.push_back(token);
            start = end + 1;
            end = line.find(',', start);
        }
        token = line.substr(start);
        tokens.push_back(token);
        movies.push_back(tokens);
    }

    cout << setw(44) << left << "Movie Title" << " | " << setw(5) << right << "Rating" << " | " << "Showtimes" << endl;
    cout << setfill('-') << setw(56) << "" << endl;
    cout << setfill(' ');

    string current_movie = "";
    for (vector<string> movie : movies) {
        if (movie[1] != current_movie) {
            if (current_movie != "") {
                cout << endl;
            }
            current_movie = movie[1];
            cout << setw(44) << left << (current_movie.length() > 44 ? current_movie.substr(0, 44) : current_movie);
            cout << " | " << setw(5) << right << movie[2] << " | " << movie[0];
        } else {
            cout << " " << movie[0];
        }
    }

    file.close();
    return 0;
}
