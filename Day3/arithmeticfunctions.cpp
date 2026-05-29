#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int divide(int x, int y)
{
    return x / y;
}
int remainder(int x, int y)
{
    return x % y;
}

int main()
{
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2st number: ";
    cin >> b;

    cout << add(a, b)<<endl;
    cout << sub(a, b)<<endl;
    cout << mul(a, b)<<endl;
    cout << divide(a, b)<<endl;
    cout << remainder(a, b)<<endl;

    return 0;
}