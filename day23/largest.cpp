#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {15, 1, 4, 3, 9, 6};

    int largest = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > largest)
        {
            largest = v[i];
        }
    }

    cout << "Largest element in array: " << largest;

    return 0;
}