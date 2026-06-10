#include <iostream>
using namespace std;

void upperPart(int n)
{
    // upper part
    int space = 0;
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
        space += 2;
    }
}

void lowerPart(int n)
{
    // lower part
    int space = (2 * n) - 2;
    for (int i = 1; i <= n; i++)
    {

        // start
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        space -= 2;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    upperPart(n);
    lowerPart(n);
    return 0;
}