#include <iostream>
using namespace std;

class Student
{
public:
    string name = "kp";
    int age = 20;
     
    Student(){

    }

    Student(Student &originalObj){
        cout<<"This copy ...";
        this->name = originalObj.name;
    }

    void show()
    {
        cout << "name: " << name << endl;
    }
};

int main()
{
    Student s1;
    Student s2(s1);
    cout<<s2.name;

    return 0;
}