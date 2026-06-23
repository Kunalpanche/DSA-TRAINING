#include <iostream>
#include <vector>
using namespace std;

int main()
{

    string str = "ABBEDJSHEWWBF";
    vector<int> hash(26, 0);

    //hash creation
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'A']++;
    }

    //retrive
    cout<<hash['W' -'A'];

    return 0;
}