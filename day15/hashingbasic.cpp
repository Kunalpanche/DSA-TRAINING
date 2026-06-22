#include <iostream>
using namespace std;

int main()
{
    
    int arr[9] = {1, 2, 3, 1, 5, 4, 1, 2, 3};
    int hash[6] = {0};
    for (int i = 0; i < 9; i++)
    {
        hash[arr[i]]++;
    }
    cout<<hash[1];
    return 0;
}