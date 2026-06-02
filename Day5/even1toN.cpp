#include <iostream>
using namespace std;

void evenNumber(int n)
{
    if (n < 1)
    {
        return;
    }
    evenNumber(n - 1);
    if (n % 2 == 0)
    {
        cout << n << " ";
    }
}

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;
    evenNumber(n);
    return 0;
}