#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age;
    }

    void show(){
        cout<<this;
    }
};

int main()
{
    Student s1("kp", 21);
    s1.display();
    return 0;
}