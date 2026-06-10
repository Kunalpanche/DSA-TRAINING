#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (char j = 'E' - i + 1; j <= 'E'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}