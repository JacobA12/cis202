#include <iostream>
#include <vector>
using namespace std;

// CalcAverage() takes in an int vector and returns the average value of elements in the vector as a double.
double CalcAverage(vector<int> nums)
{

    /* Type your code here. */
    double sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    return sum / nums.size();
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << CalcAverage(nums) << endl; // CalcAverage() should return 3.0.
    return 0;
}
