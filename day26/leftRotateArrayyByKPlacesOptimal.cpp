#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int k = 2;
    int n = v.size();
    k = k % n;

    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
    reverse(v.begin(), v.end());

    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}