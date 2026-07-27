#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();

    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }

    if(j == -1){
        return;
    }

    for (int i = j + 1; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> v = {1, 1, 1, 3, 12};
    moveZeroes(v);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}