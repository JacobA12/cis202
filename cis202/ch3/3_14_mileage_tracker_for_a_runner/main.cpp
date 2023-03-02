#include "MileageTrackerNode.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
   // References for MileageTrackerNode objects
   MileageTrackerNode* headNode;
   MileageTrackerNode* currNode;
   MileageTrackerNode* lastNode;

   double miles;
   string date;
   int i;

   // Front of nodes list
   headNode = new MileageTrackerNode();
   lastNode = headNode;

   // TODO: Read in the number of nodes
   int numNodes;
   cin >> numNodes;
   // TODO: For the read in number of nodes, read
   //       in data and insert into the linked list
   for (int i = 0; i < numNodes; i++)
   {
      cin >> miles;
      cin >> date;

      MileageTrackerNode *newNode = new MileageTrackerNode(miles, date);
      lastNode->InsertAfter(newNode);
      lastNode = newNode;
   }
   
   // TODO: Call the PrintNodeData() method
   //       to print the entire linked list
   currNode = headNode ->GetNext();
   while(currNode)
   {
      currNode->PrintNodeData();
      currNode = currNode->GetNext();
   }
   // MileageTrackerNode Destructor deletes all
   //       following nodes
   delete headNode;
}