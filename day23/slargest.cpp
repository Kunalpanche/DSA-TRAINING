#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> v = {15, 1, 40, 3, 9, 6};

    int largest = v[0];
    int sleargest = INT_MIN;

    for (int i = 1; i < v.size(); i++)
    {

        if (v[i] > largest)
        {
            sleargest = largest;
            largest = v[i];
        }
        else if (v[i] < largest && v[i] > sleargest)
        {
            sleargest = v[i];
        }
    }

    cout << "Largest elm: " << largest << endl;
    cout << "Second largest elm: " << sleargest << endl;
    return 0;
}