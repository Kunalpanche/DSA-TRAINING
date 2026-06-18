#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5, 100);
    v.push_back(200);
    v.emplace_back(400);


    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    for(auto it = v.rbegin(); it != v.rend(); it++){
        cout<<*it<<" ";
    }
    // Raged based loop

    // for(auto it : v){
    //     cout<<it<<" ";
    // }
    return 0;
}