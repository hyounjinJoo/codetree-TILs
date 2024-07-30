#include <iostream>
using namespace std;

int main() 
{
    int LoopMax = 0;
    cin >> LoopMax;

    string InputResult;
    {
        string TempStr;
        for(int Iter = 0; Iter < LoopMax; ++Iter)
        {
            cin >> TempStr;
            InputResult += TempStr;
        }
    }

    for(int Idx = 0; Idx < InputResult.length(); ++Idx)
    {
        cout << InputResult[Idx];

        if((Idx + 1) % 5 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}