#include <iostream>
using namespace std;

class Students
{
private:
    string name = "Kunal";
    string email = "kp@gmail";
    int age = 21;

public:
    void getData()
    {
        cout << name << endl;
        cout << email << endl;
        cout << age << endl;
    }

    void setData()
    {
        name = "Hitesh";
    }
};
int main()
{
    Students s1;
    s1.getData();
    s1.setData();
    return 0;
}