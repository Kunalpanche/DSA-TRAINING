#include <iostream>
using namespace std;

class Fahter
{
public:
    string surname = "Panche";

    void discipline()
    {
        cout << "father teaches Discipline...\n";
    }
};

class Mother
{

public:
    void cooking()
    {
        cout << "Mother teaches cooking...\n";
    }
};

class MaleChild : public Fahter, public Mother
{
public:
    string name = "boy";
};

class FemaleChild : public Fahter, public Mother
{
public:
    string name = "girl";
};
int main()
{

    Child c1;
    cout << c1.name << " " << c1.surname<<endl;
    c1.discipline();
    c1.cooking();
    return 0;
}