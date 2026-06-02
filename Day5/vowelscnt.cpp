#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "PrOgrAmming";
    int cnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}