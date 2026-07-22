#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2, 2, 5, 5, 5, 6, 6};
    
    int i = 0;
    for (int j = 1; j < v.size(); j++)
    {
        if (v[i] != v[j])
        {
            i++;
            v[i] = v[j];
        }
    }

    for (int k = 0; k <= i; k++)
    {
        cout << v[k] << " ";
    }
    return 0;
}