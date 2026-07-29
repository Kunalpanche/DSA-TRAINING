#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    int maximum = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        int sum = 0;
        for (int end = start; end < n; end++)
        {
            sum += nums[end];

            if (sum > maximum)
            {
                maximum = sum;
            }
        }
    }
    return maximum;
}

int main()
{
    // vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // 6;
    vector<int> v = {5, 4, -1, 7, 8}; // 23;
    cout << maxSubArray(v);

    return 0;
}