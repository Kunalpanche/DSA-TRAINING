#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> ls;

    ls.push_back(10);
    ls.emplace_back(60);
    ls.push_back(30);
    ls.emplace_back(40);
    ls.push_front(100);
    ls.push_front(100);
    ls.push_front(100);
    ls.push_front(100);
    ls.push_front(100);
    ls.push_front(100);

    // for (auto it = ls.begin(); it != ls.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    ls.remove(100);
    for (auto it : ls)
    {
        cout << it << " ";
    }
    return 0;
}