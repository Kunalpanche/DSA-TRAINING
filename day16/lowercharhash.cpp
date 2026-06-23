#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string str = "abbebcebtaaaa";
    vector<int> hash(26, 0);

    //hash creation
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'a']++;
    }

    //retrive
    // cout<<hash['t' -'a'];

    for(auto it : hash){
        cout<<it<<" ";
    }

    return 0;
}