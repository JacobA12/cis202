#include <iostream>
using namespace std;
int CountEvens(int num1, int num2, int num3, int num4)
{
    int count = 0;

    if (num1 % 2 == 0)
    {
        count++;
    }
    if (num2 % 2 == 0)
    {
        count++;
    }
    if (num3 % 2 == 0)
    {
        count++;
    }
    if (num4 % 2 == 0)
    {
        count++;
    }

    return count;
}
/* Type your code here. */

int main()
{
    int result;

    result = CountEvens(3, 1, 4, 12);
    cout << "Total evens: " << result << endl; // Expected "Total evens: 2".

    return 0;
}
