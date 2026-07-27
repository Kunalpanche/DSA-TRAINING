#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    vector<int> temp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            temp.push_back(nums[i]);
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        nums[i] = temp[i];
    }

    for (int i = temp.size(); i < n; i++)
    {
        nums[i] = 0;
    }
}

int main()
{
    vector<int> v = {0, 1, 0, 3, 12};
    moveZeroes(v);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}