#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &arr, int x)
    {
        // code here
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == x)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int target = 100;

    Solution obj;
    cout<<"Element Found at index: "<<obj.search(v, target);
    return 0;
}
