#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

char letterGradeConversion(double examScore)
{
   if (examScore >= 90)
   {
      return 'A';
   }
   else if (examScore >= 80)
   {
      return 'B';
   }
   else if (examScore >= 70)
   {
      return 'C';
   }
   else if (score >= 60)
   {
      return 'D';
   }
   else
   {
      return 'F';
   }
}

int main()
{

   /* TODO: Declare any necessary variables here. */
   ifstream inFS;
   string fileName;

   double averageScore;
   int midterm1;
   int midterm2;
   int finalExam;
   string lastName;
   string firstName;
   char letterGrade;

   /* TODO: Read a file name from the user and read the tsv file here. */
   cin >> fileName;
   inFS.open(fileName);
   if (!inFS.is_open())
   {
      return 1;
   }

   /* TODO: Compute student grades and exam averages, then output results to a text file here. */

   return 0;
}
