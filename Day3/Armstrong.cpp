#include <iostream>
using namespace std;

int main()
{
    int num, original, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;

    while (num > 0)
    {
        int lastDigit = num % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        num /= 10;
    }

    if (original == sum)
    {

        cout << "This is Armstrong number";
    }
    else
    {
        cout << "Not a Armstrong number";
    }

    return 0;
}