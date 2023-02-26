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
   
   }

   return 0;
}