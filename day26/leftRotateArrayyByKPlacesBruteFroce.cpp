#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> temp;
    int k = 1;
    int n = v.size();
    k = k % n;

    // store k elements in temp array; 0(k)
    for (int i = 0; i < k; i++)
    {
        temp.push_back(v[i]);
    }

    // shift the n-k elements by k places; 0(n-k)

    for (int i = k; i < n; i++)
    {
        v[i - k] = v[i];
    }

    // push back the k elements from temp array to orignal array; 0(k)
    int idx = 0;
    for (int i = n - k; i < n; i++)
    {
        v[i] = temp[idx];
        idx++;
    }

    // print the orignal array;
    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}