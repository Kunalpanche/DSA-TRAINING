#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}