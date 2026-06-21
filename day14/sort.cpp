#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {100, 10, 70, 15, 8, 200};
    sort(v.begin(), v.end(), greater<int>());
    for(auto it : v){
        cout<<it<<" ";
    }

    int arr[6] = {100, 10, 70, 15, 8, 200};
    sort(arr, arr+6, greater<int>());
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}