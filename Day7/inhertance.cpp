#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    int age;
    string color;

    void eat()
    {
        cout << "eating...\n";
    }

    void sleep()
    {
        cout << "sleeping...\n";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "boww bowww...";
    }
};

int main()
{
    Dog d1;
    d1.name = "Tommy";
    d1.age = 10;
    cout << "Name: " << d1.name << endl;
    cout << "Age: " << d1.age << endl;
    d1.eat();
    d1.sleep();
    d1.bark();
    return 0;
}