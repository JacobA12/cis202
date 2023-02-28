#include <iostream>
#include <fstream>

using namespace std;

int main()
{

   /* Type your code here. */
   ifstream inFS;

   string fileName;
   string currentLine;

   cin >> fileName;

   inFS.open(fileName);

   while (getline(inFS, currentLine))
   {

      // getting tab positions
      unsigned int pos1 = currentLine.find('\t');
      unsigned int pos2 = currentLine.find('\t', pos1 + 1);
      unsigned int pos3 = currentLine.find('\t', pos2 + 1);

      if (pos1 == string::npos)
      {
         continue;
      }
      if (pos2 == string::npos)
      {
         continue;
      }
      if (pos3 == string::npos)
      {
         continue;
      }

      // parsing food data
      string currentCategory, currentName, currentDescription, currentAvailability;
      currentCategory = currentLine.substr(0, pos1);
      currentName = currentLine.substr(pos1 + 1, pos2 - pos1 - 1);
      currentDescription = currentLine.substr(pos2 + 1, pos3 - pos2 - 1);
      currentAvailability = currentLine.substr(pos3 + 1);

      if (currentAvailability == "Available")
      {
         cout << currentName << " (" << currentCategory << ") -- " << currentDescription << endl;
      }
   }
   inFS.close();
   return 0;
}