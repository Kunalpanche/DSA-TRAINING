#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string n, int a){
        name  = n;
        age =a;
    }
};

int main()
{
    Student s1("Kunal", 21);
    cout<<"The name of S1 is:"<<s1.name<<endl;
    cout<<"The age of S1 is:"<<s1.age;

    return 0;
}