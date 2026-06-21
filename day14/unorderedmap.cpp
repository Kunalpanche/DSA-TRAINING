#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<int, string> umap;
    umap.insert({101, "Kunal"});
    umap.insert({102, "Piyush"});
    umap.insert({101, "KP"});
    umap.insert({102, "PC"});
    umap.insert({39, "Hitesh"});
    umap.insert({104, "Sidd"});

    // for (auto it : umap)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // cout<<umap[104];

    // for (auto it = umap.begin(); it != umap.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // auto it = umap.begin();
    // cout<<it->first;

    // cout<<umap.size()<<endl;
    // umap.clear();
    // cout<<umap.size();

    umap.erase(101);
    for (auto it = umap.begin(); it != umap.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}