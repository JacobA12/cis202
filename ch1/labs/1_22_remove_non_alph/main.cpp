#include <iostream>
#include <string>
using namespace std;

string RemoveNonAlpha(string userString)
{
    string resultString = "";
    for (int i = 0; i < userString.size(); i++)
    {
        if (isalpha(userString[i]))
        {
            resultString += userString[i];
        }
    }

    return resultString;
}

int main()
{
    string userString;

    cout << "Enter a string: " << endl;
    getline(cin, userString);

    /* Type your code here. Your code must call the function.  */
    cout << RemoveNonAlpha(userString) << endl;

    return 0;
}
