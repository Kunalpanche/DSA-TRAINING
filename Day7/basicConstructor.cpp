#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    Student(string n, int r)
    {
        cout << "Parameterized constructor...\n";
        name = n;
        rollNo = r;

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1("KP", 263);
    Student s2("op", 83);
    Student s3("df", 33);
    Student s4("rP", 34);
    return 0;
}