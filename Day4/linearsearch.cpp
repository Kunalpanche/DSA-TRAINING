#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key;
    bool isFound = false;
    cout << "Enter a key: ";
    cin >> key;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            isFound = true;
        }
    }

    if (isFound)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}