#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0, original = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    while (num > 0)
    {
        int last = num % 10;
        rev = rev * 10 + last;
        num /= 10;
    }
    if (original == rev)
    {
        cout << "Palindrome number";
    }
    else
    {
        cout << "Not a Plindroem number";
    }

    return 0;
}