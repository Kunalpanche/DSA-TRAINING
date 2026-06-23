#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string str = "aabCCaABABDce";
    unordered_map<char, int> hashmap;

    // Traverse in string
    for (int i = 0; i < str.size(); i++)
    {
        hashmap[str[i]]++;
    }

    // Traverse in hashmap
    for(auto it : hashmap){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    return 0;
}