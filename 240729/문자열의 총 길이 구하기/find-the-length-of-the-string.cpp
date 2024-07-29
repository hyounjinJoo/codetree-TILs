#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int TotalLength = 0;

    string TempStr;
    for(int Idx = 0; Idx < 10; ++Idx)
    {
        cin >> TempStr;
        TotalLength += TempStr.length();
    }

    cout << TotalLength;
    return 0;
}