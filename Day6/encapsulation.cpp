#include <iostream>
using namespace std;

class bank
{
private:
    int bankBalance = 5000;

public:
    void getBankBalance()
    {
        cout << bankBalance;
    }

    void deposite(int n)
    {
        bankBalance += n;
    }
};
int main()
{

    bank b1;
    b1.deposite(5000);
    b1.getBankBalance();
    return 0;
}