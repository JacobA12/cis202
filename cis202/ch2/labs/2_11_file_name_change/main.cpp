#include <iostream>
#include <cstring>
#include <fstream>

// Include any necessary libraries here.

using namespace std;

int main()
{

   string filename;
   cin >> filename;

   ifstream infile(filename);

   if (!infile)
   {
      return 1;
   }

   string fileLine;
   while (getline(infile, fileLine))
   {

      unsigned int pos1 = fileLine.find("_photo.jpg");
      if (pos1 != string::npos)
      {
         string infoNameChange = fileLine.substr(0, pos1) + "_info.txt";
         cout << infoNameChange << endl;
      }
   }
   infile.close();
   return 0;
}
