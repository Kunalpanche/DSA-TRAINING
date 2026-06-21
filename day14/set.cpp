#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int, greater<int>> s;
    s.insert(10);
    s.insert(5);
    s.insert(30);
    s.insert(7);
    s.insert(1);
    s.insert(9);
    s.insert(10);
    // for(auto it : s){
    //     cout<<it<<" ";
    // }
    // auto it = s.begin();
    // cout<<*it;

    // cout<<s.count(10);

    // auto it= s.find(11);
    // if(it != s.end()){
    //     cout<<"Found\n";
    // }else{
    //     cout<<"Not found\n";
    // }

    // s.erase(s.begin());
    // s.erase(9);

    for (auto it : s)
    {
        cout << it << " ";
    }
    return 0;
}