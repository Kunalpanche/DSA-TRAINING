#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;
    swap(arr[high], arr[i]);
    return i;
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int pIdx = partition(arr, low, high);
    quickSort(arr, low, pIdx - 1);
    quickSort(arr, pIdx + 1, high);
}

int main()
{
    vector<int> v = {100, 5, 3, 4, 1, 2};
    quickSort(v, 0, v.size() - 1);

    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}