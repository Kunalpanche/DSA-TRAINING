#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str = "ABFabbebcBBEebDAVDtaaaa";
    vector<int> hash(123, 0);

    for(int i =0; i< str.size(); i++){
        hash[str[i]]++;
    }

    for(auto it : hash){
        cout<<it<<" ";
    }
    return 0;
}