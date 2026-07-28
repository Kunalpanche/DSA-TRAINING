#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40};

    int n = v.size();
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {

            for (int k = start; k <= end; k++)
            {
                cout << v[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}