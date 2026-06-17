#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> v; // empty array
    // v.push_back(10);
    // v.push_back(20);
    // cout << v[0] << " " << v[1];

    // vector<int> v = {10, 20, 30};
    // cout << v[0];

    // vector<int> v(5, 100);

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.emplace_back(40);

    // v.pop_back(); // delete element form back

    // for (auto i = v.begin(); i != v.end(); i++)
    // {
    //     cout << *i << " ";
    // }

    // auto it = v.begin() + 3;
    // cout << *it;

    // // Range based loop
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }

    // cout<<v.front()<<" ";
    // cout<<v.back()<<" ";

    // cout<<v.empty();

    // cout<<v.size()<<endl; // 4
    // v.clear();
    // cout<<v.size()<<endl; // 0

    // v.erase(v.begin(), v.begin()+3);

    // v.insert(v.begin()+2, 15);
    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }

    for (auto i = v.rbegin(); i != v.rend(); i++)
    {
        cout << *i << " ";
    }
    return 0;
}