#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int initalValue = 1;
        if (i % 2 == 0)
        {
            initalValue = 0;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << initalValue;
            initalValue = 1- initalValue;
        }
        cout << endl;
    }

    return 0;
}