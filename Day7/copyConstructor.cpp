#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    Student()
    {
    }
    Student(Student &a)
    {
        cout << "copy Constructor.\n";
        this->name = a.name;
        this->rollNo = a.rollNo;
    }
};
int main()
{
    Student s1;
    s1.name = "kp";
    s1.rollNo = 45;
    cout << "S1: " << s1.name << endl;
    cout << "S1: " << s1.rollNo << endl;
    Student s2(s1);
    cout << "S2: " << s2.name << endl;
    cout << "S2: " << s2.rollNo << endl;

    return 0;
}