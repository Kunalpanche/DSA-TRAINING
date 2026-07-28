#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mpp;

    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int num = nums[i];
        int more = target - num;

        if (mpp.find(more) != mpp.end())
        {
            return {mpp[more], i};
        }
        mpp[num] = i;
    }
    return {};
}

int main()
{
    vector<int> v = {2, 7, 11, 15};
    vector<int> ans = twoSum(v, 9);

    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}