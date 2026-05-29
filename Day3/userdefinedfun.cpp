#include <iostream>
using namespace std;

void greet(string name){
    cout<<"Hello "<<name<<endl;
}

int fun1(int x){
    return x;
}

int main()
{
    cout<<fun1(10);
    
    return 0;
}