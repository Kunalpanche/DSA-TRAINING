#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    
    char target;
    cout<<"Enter a character: "; 
    cin>>target;

    int cnt= 0;

    for(int i =0; i< str.length(); i++){
        if(str[i] == target){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;

}