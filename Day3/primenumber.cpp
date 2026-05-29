#include <iostream>
using namespace std;

int main()
{
    int num, cnt = 1;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            cnt++;
        }
    }

    if (cnt == 2)
    {
        cout << "This is Prime number.";
    }
    else
    {
        cout << "Not a Prime number.";
    }

    return 0;
}