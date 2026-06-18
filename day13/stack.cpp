#include <bits/stdc++.h>
using namespace std;

int main()
{

    // stack<int> st;

    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);

    // stack<int> temp = st;
    // while (!temp.empty())
    // {
    //     cout << temp.top() << " ";
    //     temp.pop();
    // }

    // cout<<"original stack: "<<st.size();

    stack<int> st1, st2;
    st1.push(10);
    st1.push(20);
    st2.push(30);
    st2.push(40);
    
    cout << "Stack value before swap: " << st1.top() << " " << st2.top()<<endl;
    st1.swap(st2);
    cout << "Stack value After swap:" << st1.top() << " " << st2.top();
    return 0;
}