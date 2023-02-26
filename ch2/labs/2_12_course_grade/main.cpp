#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;
// makes main cleaner if this is up here
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
   else if (examScore >= 60)
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

   vector<string> firstName;
   vector<string> lastName;
   vector<int> midtermScores1;
   vector<int> midtermScores2;
   vector<int> finalExamScores;

   /* TODO: Read a file name from the user and read the tsv file here. */
   cin >> fileName;
   // opening tsv
   inFS.open(fileName);
   
   if (!inFS.is_open())
   {
      return 1;
   } 


   /* TODO: Compute student grades and exam averages, then output results to a text file here. */

   // control structure to add data from tsv to vectors
   while (inFS)
   {
      string currentLastName, currentFirstName;
      int currentMidterm1, currentMidterm2, currentFinal;

      inFS >> currentLastName >> currentFirstName >> currentMidterm1 >> currentMidterm2 >> currentFinal;

      if (inFS)
      {
         firstName.push_back(currentFirstName);
         lastName.push_back(currentLastName);

         midtermScores1.push_back(currentMidterm1);
         midtermScores2.push_back(currentMidterm2);
         finalExamScores.push_back(currentFinal);
      }
   }
   inFS.close();
   // beginning of output to "report.txt"
   ofstream outFS;
   outFS.open("report.txt");

    
  if (!outFS.is_open())
   {
      return 1;
   }
 
   double midtermAvg1 = 0.0;
   double midtermAvg2 = 0.0;
   double finalAvg = 0.0;

   int numStudents = firstName.size();
   // file output control structure
   for (int i = 0; i < numStudents; i++)
   {
      double avgScore = (midtermScores1[i] + midtermScores2[i] + finalExamScores[i]) / 3.0;
      char letterGrade = letterGradeConversion(avgScore);

      midtermAvg1 += midtermScores1[i];
      midtermAvg2 += midtermScores2[i];
      finalAvg += finalExamScores[i];

      outFS << lastName[i] << '\t' << firstName[i] << '\t'
            << midtermScores1[i] << '\t' << midtermScores2[i] << '\t'
            << finalExamScores[i] << '\t' << letterGrade << endl;
   }

   // testAvg calc
   midtermAvg1 /= numStudents;
   midtermAvg2 /= numStudents;
   finalAvg /= numStudents;

   // final output for testAvg
   outFS << "Averages: midterm1 " << fixed << setprecision(2) << midtermAvg1
         << ", midterm2 " << fixed << setprecision(2) << midtermAvg2
         << ", final " << fixed << setprecision(2) << finalAvg << endl;

   outFS.close();
   return 0;
}
