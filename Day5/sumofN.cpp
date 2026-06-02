#include <iostream>
using namespace std;

int sumofN(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n + sumofN(n - 1);
     
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<sumofN(n);
    return 0;
}