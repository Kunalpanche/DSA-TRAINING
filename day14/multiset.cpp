#include <bits/stdc++.h>
using namespace std;

int main()
{

    multiset<int, greater<int>> ms;

    ms.insert(10);
    ms.insert(5);
    ms.insert(30);
    ms.insert(30);
    ms.insert(30);
    ms.insert(30);
    ms.insert(30);
    ms.insert(30);
    ms.insert(7);
    ms.insert(1);
    ms.insert(9);
    ms.insert(10);

    // for (auto it : ms)
    // {
    //     cout << it << " ";
    // }

    // cout<<ms.count(10);

    auto it = ms.find(30);
    ms.erase(it);

    cout << ms.count(30);

    return 0;
}