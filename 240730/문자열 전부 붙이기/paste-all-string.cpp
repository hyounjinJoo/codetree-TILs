#include <iostream>
using namespace std;

int main() 
{
    int LoopMax = 0;
    cin >> LoopMax;

    string OutputStr;
    string TempStr;
    for(int Iter = 0; Iter < LoopMax; ++Iter)
    {
        cin >> TempStr;
        OutputStr += TempStr;
    }

    cout << OutputStr;

    return 0;
}