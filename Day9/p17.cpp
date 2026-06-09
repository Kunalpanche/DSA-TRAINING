#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        //  space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "-";
        }

        // alpha
        char ch = 'A';
        int half = ((2 * i) - 1) / 2;
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << ch;
            if (j <= half)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "-";
        }

        cout << endl;
    }

    return 0;
}