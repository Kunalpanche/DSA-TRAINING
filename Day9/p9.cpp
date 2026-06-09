#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // tiangle1
    for (int i = 1; i <= n; i++)
    {

        // space
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // triangle 2
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= (i - 1); j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}