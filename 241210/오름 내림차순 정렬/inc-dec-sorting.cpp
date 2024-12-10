#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() 
{
    int Count = 0;
    cin >> Count;

    vector<int> Array;
    Array.resize(Count);
    for(int IDX = 0; IDX < Count; ++IDX)
    {
        cin >> Array[IDX];
    }

    sort(Array.begin(), Array.end(), less<int>());
    for(int IDX = 0; IDX < Count; ++IDX)
    {
        cout << Array[IDX] << " ";
    }
    cout << endl;

    sort(Array.begin(), Array.end(), greater<int>());
    for(int IDX = 0; IDX < Count; ++IDX)
    {
        cout << Array[IDX] << " ";
    }
    cout << endl;

    return 0;
}