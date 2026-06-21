#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int, string> mpp;

    mpp.insert({101, "Kunal"});
    mpp.insert({101, "KP"});
    mpp.insert({110, "lol"});
    mpp.insert({102, "Piyush"});
    mpp.insert({103, "Hitesh"});
    mpp.insert({102, "Krish"});

    // for (auto it : mpp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // cout<<mpp[103]; // Random access not possible

    // cout<< mpp.size()<<endl;
    // mpp.clear();
    // cout<< mpp.size()<<endl;

    cout<<mpp.empty();


    return 0;
}