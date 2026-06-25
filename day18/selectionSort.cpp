#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int mini = i;
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main()
{

    vector<int> arr = {12, 45, 23, 50, 20, 8};

    selectionSort(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}