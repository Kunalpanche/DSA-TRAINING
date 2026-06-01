#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int evencnt = 0, oddcnt = 0;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evencnt++;
        }
        else
        {
            oddcnt++;
        }
    }
    cout << "Even Count: " << evencnt<<endl;
    cout << "Odd Count: " << oddcnt;
    return 0;
}