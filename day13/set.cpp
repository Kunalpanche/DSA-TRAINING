#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(34);
    s.insert(20);
    s.insert(20);
    s.insert(4);
    s.insert(54);
    s.insert(41);
    s.insert(41);

    // for (auto it : s)
    // {
    //     cout << it << " ";
    // }

    // cout<<endl;
    // cout<<s.count(42);

    auto it = s.find(4);
    if (it != s.end())
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }

    return 0;
}