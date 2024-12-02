#include <iostream>
using namespace std;

bool IsPrimeNumber(const int InNumber)
{
    if(1 == InNumber)
    {
        return false;
    }

    for(int Denominator = 2; Denominator < InNumber; ++Denominator)
    {
        if(InNumber % Denominator == 0)
        {
            return false;
        }
    }

    return true;
}

bool AllNumberSumEven(int InNumber)
{
    int Sum = 0;
    while(InNumber > 0)
    {        
        Sum = Sum + (InNumber % 10);
        InNumber /= 10;
    }

    if(Sum % 2 == 0)
    {
        return true;
    }

    return false;
}

int main() 
{
    int NumA, NumB;
    NumA = NumB = 0;

    cin >> NumA >> NumB;

    int Count = 0;
    for(int Number = NumA; Number <= NumB; ++Number)
    {
        if(IsPrimeNumber(Number) && AllNumberSumEven(Number))
        {
            ++Count;
        }
    }

    cout << Count;

    return 0;
}