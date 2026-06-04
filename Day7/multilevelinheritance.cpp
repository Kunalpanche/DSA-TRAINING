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

class Puppy : public Dog{

};

int main()
{
    Dog d1;
    d1.name = "Tommy";
    d1.age = 10;

    Puppy p1;
    p1.eat();
    p1.sleep();
    p1.bark();
    return 0;
}