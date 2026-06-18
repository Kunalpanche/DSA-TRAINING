#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    // cout << q.front() << endl; // 10
    // q.pop();                   // delete 10
    // cout << q.front() << endl; // 20

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}