#include <iostream>
using namespace std;

class Car
{
private:
    void fuelCheck()
    {
        cout << "Checking fuel...\n";
    }
    void batteryCheck()
    {
        cout << "Cheking Battery..\n";
    }

public:
    void start()
    {
        fuelCheck();
        batteryCheck();
        cout << "Car Started...";
    }
};

int main()
{
    Car c1;
    c1.start();
    return 0;
}