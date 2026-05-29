#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    cout<<"adress of a: "<<ptr<<endl;
    cout<<"Value at adress ptr: "<<*ptr;

    return 0;
}   