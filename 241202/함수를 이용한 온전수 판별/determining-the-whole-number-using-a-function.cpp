#include <iostream>
using namespace std;

bool IsPerfactNumber(int InNum)
{
    if(InNum % 2 == 0)
    {
        return false;
    }
    if(InNum % 10 == 5)
    {
        return false;
    }
    if(InNum % 3 == 0 && InNum % 9 != 0)
    {
        return false;
    }

    return true;
}

int main() 
{
    int NumA, NumB;
    NumA = NumB = 0;

    cin >> NumA >> NumB;

    int Count = 0;
    for(int Number = NumA; Number <= NumB; ++Number)
    {
        if(IsPerfactNumber(Number))
        {
            ++Count;
        }
    }

    cout << Count;

    return 0;
}