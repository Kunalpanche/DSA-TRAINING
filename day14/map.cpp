#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, string> mpp = {{101, "Kunal"}, {105, "Hitesh"}};

    mpp.insert({102, "Piyush"});
    mpp.emplace(102, "Sid");
    mpp[104] = "Natu";
    // for (auto it : mpp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    // cout<<mpp[105];

    mpp[102] = "KP";

    mpp.erase(102);
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}