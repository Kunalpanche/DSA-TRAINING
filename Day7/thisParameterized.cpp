#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    Student(string name, int rollNo)
    {
        cout << "Parameterized constructor...\n";
        this->name = name;
        this->rollNo = rollNo;

        cout << "Name inside constructor: " << name << endl;
        cout << "Roll No inside constructor: " << rollNo << endl;
    }

    void show()
    {
        cout << "Name outside constructor: " << name << endl;
        cout << "Roll No outside constructor: " << rollNo << endl;
    }
};

int main()
{
    Student s1("KP", 263);
    s1.show();
    return 0;
}