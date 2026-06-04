#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    Student()
    {
        cout << "Constructor callled...\n";
    }

    ~Student()
    {
        cout << "Destructor Called...\n";

    }
};

int main()
{
    Student s1;
    s1.name = "KP";
    cout<<"Name: "<<s1.name<<endl;
    return 0;
}