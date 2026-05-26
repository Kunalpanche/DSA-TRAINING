#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    int temp;

    cout << "Before swapping: " << a << " " << b << endl;
    temp = a; // 10
    a = b;    // 20
    b = temp; // 10
    cout << "After swapping: " << a << " " << b << endl;

    return 0;
}