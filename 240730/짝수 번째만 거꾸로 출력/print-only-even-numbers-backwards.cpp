#include <iostream>
using namespace std;

int main() 
{
    string SrcStr;
    cin >> SrcStr;

    for(int Idx = SrcStr.length() - 1; Idx > -1; --Idx)
    {
        if(Idx % 2 == 1)
        {
            cout << SrcStr[Idx];
        }
    }

    return 0;
}