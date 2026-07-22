#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5};

    int temp = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        v[i - 1] = v[i];
    }
    v[v.size() - 1] = temp;

    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}