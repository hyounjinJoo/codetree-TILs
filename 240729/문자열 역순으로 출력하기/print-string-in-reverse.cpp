#include <iostream>
#include <string>

using namespace std;

int main() 
{
    constexpr int ArrayMax = 4;
    string StrArray[ArrayMax];

    for(int Idx = 0; Idx < ArrayMax; ++Idx)
    {
        cin >> StrArray[Idx];
    }

    for(int Idx = ArrayMax - 1; Idx >= 0; --Idx)
    {
        cout << StrArray[Idx] << endl;
    }
    
    return 0;
}