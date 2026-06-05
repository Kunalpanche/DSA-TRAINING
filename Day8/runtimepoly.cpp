#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    int age;

    void eat()
    {
        cout << "Eating..";
    }
    void sound()
    {
        cout << "Sound....";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Bowww Bowww...";
    }
};
class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Meow Meow...";
    }
};

int main()
{
    Dog d1;
    Cat c1;
    d1.sound();
    c1.sound();
    return 0;
}