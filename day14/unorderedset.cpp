#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> uset;
    uset.insert(10);
    uset.insert(5);
    uset.insert(30);
    uset.insert(30);
    uset.insert(30);
    uset.insert(7);
    uset.insert(1);
    uset.insert(9);
    uset.insert(10);

    // for (auto it : uset)
    // {
    //     cout << it << " ";
    // }

    auto it = uset.find(10);
    if (it != uset.end())
    {
        cout << "found";
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}