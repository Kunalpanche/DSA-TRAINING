#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    Student()
    {
        cout << "Non-Parameterized constructor...\n";
        cout << "Memory address from this pointer: " << this << endl;
    }
};
int main()
{
    Student s1;
    cout << "Memory address from Address of operaor: " << &s1;
    return 0;
}